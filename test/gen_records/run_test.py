import os
import time
import random
import subprocess
from pathlib import Path

SCRATCH_BASE_PATH = "./out"

def generate_secure_id():
    return str(random.randint(1000000, 9999999))

import sys
if len(sys.argv) != 4:
    print("Usage: python script.py <NUM_TRIALS> <TOTAL_NUM_RECORDS> <GENERATE_RECORDS>")
    sys.exit(1)

NUM_TRIALS = int(sys.argv[1])
TOTAL_NUM_RECORDS = int(sys.argv[2])
SHOULD_CREATE_FILE = int(sys.argv[3])

# Define node sweep range
NODE_SWEEP = [1]

# Get current timestamp
CURRENT_TIME = time.strftime("%Y%m%d-%H%M%S")

# Create necessary directories
os.makedirs("./out", exist_ok=True)
os.makedirs(f"./results/{CURRENT_TIME}", exist_ok=True)

# Clear out directory
subprocess.run("rm -rf /out/*", shell=True)
subprocess.run("rm -f ./batch*.sh", shell=True)

# Build the project
print("Making sure the exec builds...")
if subprocess.run(f"make clean && make TOTAL_NUM_RECORDS={TOTAL_NUM_RECORDS} GENERATE_RECORDS={SHOULD_CREATE_FILE}", shell=True).returncode != 0:
    print("Make failed! Exiting...")
    sys.exit(1)
print("Success!")

runs_active = 0
active_runs = {}  # Track active job IDs

# Iterate through node sweeps
for NUM_NODES in NODE_SWEEP:
    NUM_PEs = NUM_NODES * 128  # Compute PE count

    print(f"Sweeping with {NUM_NODES} nodes, {NUM_PEs} PEs...")

    # Run trials
    for i in range(1, NUM_TRIALS + 1):
        run_id = generate_secure_id()

        # Build again with new RUN_ID
        subprocess.run("make clean", shell=True)
        subprocess.run(f"make TOTAL_NUM_RECORDS={TOTAL_NUM_RECORDS} GENERATE_RECORDS={SHOULD_CREATE_FILE} RUN_ID={run_id}", shell=True)
        streamtest_exec = Path(f"./streamtest")
        streamtest_exec.rename(f"./streamtest-{run_id}")
        
        print(f"Starting trial {i} with {NUM_NODES} NODES, {NUM_PEs} PEs...")

        # Create output directory for the trial
        trial_dir = Path(f"./results/{CURRENT_TIME}/nodes-{NUM_NODES}/run-{run_id}")
        trial_dir.mkdir(parents=True, exist_ok=True)
        
        temp_in = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/in")
        temp_out = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/out")
        temp_in.mkdir(parents=True, exist_ok=True)
        temp_out.mkdir(parents=True, exist_ok=True)
        
        # Generate batch script
        batch_script = Path(f"./batch_{NUM_NODES}_{i}.sh")
        with batch_script.open("w") as f:
            f.write(f"""#!/bin/bash
#SBATCH --mem=128G
#SBATCH --nodes={NUM_NODES}
#SBATCH --ntasks-per-node=128
#SBATCH --cpus-per-task=1
#SBATCH --partition=cpu
#SBATCH --account=mzu-delta-cpu
#SBATCH --job-name=myjobtest
#SBATCH --time=00:10:00
#SBATCH --constraint="scratch"
#SBATCH --output=log-{run_id}.out

echo "Running job on {NUM_NODES} nodes with {NUM_PEs} PEs"
./charmrun +p{NUM_PEs} ./streamtest-{run_id}
touch done-{run_id}  # Signal job completion
""")

        # Make script executable
        batch_script.chmod(0o755)

        # Submit job
        subprocess.run(f"sbatch --export=ALL {batch_script}", shell=True)
        runs_active += 1
        active_runs[run_id] = {
            "num_nodes": NUM_NODES,
            "trial": i
        }
        print(active_runs)

# Monitor job completion
print("Done queuing all jobs, now waiting for all jobs to finish")
while runs_active > 0:
    time.sleep(5)  # Wait for 5 seconds

    for done_file in Path(".").glob("done-*"):
        run_id = done_file.name.split("-")[1]

        if run_id in active_runs.keys():
            run_metadata = active_runs[run_id]
            print(f"Cleaning up for run {run_id} with {run_metadata['num_nodes']} nodes, trial {run_metadata['trial']}")
            done_file.unlink()  # Remove signal file
            
            # print("Cleaning up out files if written")
            # temp_out = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/out")
            # subprocess.run(f"rm -rf {temp_out}", shell=True)
            
            # print("Cleaning up in files if written")
            # temp_out = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/in")
            # subprocess.run(f"rm -rf {temp_out}", shell=True)
            
            print("Cleaning up run all run files")
            temp_folder = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}")
            subprocess.run(f"rm -rf {temp_folder}", shell=True)
            
            print("Moving log to ./results")
            log_file = Path(f"log-{run_id}.out")
            if log_file.exists():
                log_file.rename(f"./results/{CURRENT_TIME}/nodes-{NUM_NODES}/run-{run_id}/{log_file.name}")
            else:
                print(f"WARNING: could not find log file for run id {run_id}")
            print("Deleting exec")
            streamtest_exec = Path(f"./streamtest-{run_id}")
            if streamtest_exec.exists():
                streamtest_exec.unlink()
            else:
                print(f"WARNING: could not delete exec for run id {run_id}")

            runs_active -= 1
            active_runs.pop(run_id)
        else: 
            print(f"WARNING: GOT BACK INVALID RUNID {run_id}")
print("All trials completed across all node configurations!")
