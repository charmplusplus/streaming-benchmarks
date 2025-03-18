#!/bin/bash

# Ensure script is executed with correct number of arguments
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <NUM_TRIALS> <TOTAL_NUM_RECORDS> <GENERATE RECORDS>"
    exit 1
fi

# Assign command-line arguments to variables
NUM_TRIALS=$1
TOTAL_NUM_RECORDS=$2
SHOULD_CREATE_FILE=$3

# Define the node sweep range
NODE_SWEEP=(1)

# Get current timestamp for unique result directory
CURRENT_TIME=$(date +"%Y%m%d-%H%M%S")

# Create necessary directories
mkdir -p ./out
rm -rf ./out/*
rm -f ./batch*.sh

# Build the project
make clean
make TOTAL_NUM_RECORDS=${TOTAL_NUM_RECORDS} GENERATE_RECORDS=${SHOULD_CREATE_FILE}
if [ $? -ne 0 ]; then
    echo "Make failed! Exiting..."
    exit 1
fi

# Loop over different node counts
for NUM_NODES in "${NODE_SWEEP[@]}"; do
    NUM_PEs=$((NUM_NODES * 128))  # Compute PE count

    echo "Sweeping with $NUM_NODES nodes, $NUM_PEs PEs..."

    # Run trials
    for ((i=1; i<=NUM_TRIALS; i++))
    do
        echo "Starting trial $i with $NUM_NODES NODES, $NUM_PEs PEs..."
        
        # Create output directory for the trial
        mkdir -p ./results/${CURRENT_TIME}/nodes${NUM_NODES}/run${i}/out
        
        # Generate a unique batch script per run
        BATCH_SCRIPT="./batch_${NUM_NODES}_${i}.sh"
        
        cat <<EOF > $BATCH_SCRIPT
#!/bin/bash
#SBATCH --mem=128G
#SBATCH --nodes=${NUM_NODES}
#SBATCH --ntasks-per-node=128
#SBATCH --cpus-per-task=1
#SBATCH --partition=cpu
#SBATCH --account=mzu-delta-cpu
#SBATCH --job-name=myjobtest
#SBATCH --time=00:10:00
#SBATCH --constraint="scratch"
#SBATCH --output=log-%j.out

echo "Running job on ${NUM_NODES} nodes with ${NUM_PEs} PEs"
./charmrun +p${NUM_PEs} ./streamtest
touch done  # Signal job completion
EOF
        
        # Make the script executable
        chmod +x $BATCH_SCRIPT

        # Submit the batch job
        sbatch --export=ALL $BATCH_SCRIPT

        # Wait for job completion
        while [ ! -f done ]; do
            sleep 5
        done

        # Remove the done file
        rm done

        # Move output files
        mv ./out/* ./results/${CURRENT_TIME}/nodes${NUM_NODES}/run${i}/out/
        mv log*.out ./results/${CURRENT_TIME}/nodes${NUM_NODES}/run${i}/
        mv batch*.sh ./results/${CURRENT_TIME}/nodes${NUM_NODES}/run${i}/
        echo "Trial $i for ${NUM_NODES} nodes completed. Results saved in ./results/${CURRENT_TIME}/nodes${NUM_NODES}/run${i}/"
    done
done

echo "All trials completed across all node configurations!"
