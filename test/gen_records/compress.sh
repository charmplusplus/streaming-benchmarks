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
zstd -18 --threads=0 master.json