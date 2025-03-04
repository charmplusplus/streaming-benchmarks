import os
import time
import random
import subprocess
from pathlib import Path

SCRATCH_BASE_PATH = "./out"

import sys
if len(sys.argv) != 2:
    print("Usage: python script.py <TOTAL_NUM_RECORDS>")
    sys.exit(1)

TOTAL_NUM_RECORDS = int(sys.argv[1])

# Define node sweep range
NODE_SWEEP = [1]
NUM_TRIALS = 1

# Create necessary directories
os.makedirs("./out", exist_ok=True)

subprocess.run("rm -rf /out/*", shell=True)

print("Making sure the exec builds...")
if subprocess.run(f"make clean && make TOTAL_NUM_RECORDS={TOTAL_NUM_RECORDS}", shell=True).returncode != 0:
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

        # Build again with new RUN_ID
        subprocess.run("make clean", shell=True)
        subprocess.run(f"make TOTAL_NUM_RECORDS={TOTAL_NUM_RECORDS}", shell=True)
        streamtest_exec = Path(f"./streamtest")
        
        print(f"Starting trial {i} with {NUM_NODES} NODES, {NUM_PEs} PEs...")

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
#SBATCH --time=00:15:00
#SBATCH --constraint="scratch"
#SBATCH --output=log-%j.out

echo "Running job on {NUM_NODES} nodes with {NUM_PEs} PEs"
./charmrun +p{NUM_PEs} ./streamtest
touch done  # Signal job completion
""")

        # Make script executable
        batch_script.chmod(0o755)

        # Submit job
        subprocess.run(f"sbatch --export=ALL {batch_script}", shell=True)
        runs_active += 1

print("Done queuing all jobs, now waiting for all jobs to finish")
while runs_active > 0:
    time.sleep(5)  # Wait for 5 seconds

    for done_file in Path(".").glob("done"):
        done_file.unlink()  # Remove signal file
        
        # print("Cleaning up out files if written")
        # temp_out = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/out")
        # subprocess.run(f"rm -rf {temp_out}", shell=True)
        
        # print("Cleaning up in files if written")
        # temp_out = Path(f"{SCRATCH_BASE_PATH}/run-{run_id}/in")
        # subprocess.run(f"rm -rf {temp_out}", shell=True)
        
        print("Deleting exec")
        streamtest_exec = Path(f"./streamtest")
        if streamtest_exec.exists():
            streamtest_exec.unlink()
        else:
            print(f"WARNING: could not delete exec")

        runs_active -= 1
print("All trials completed across all node configurations!")
