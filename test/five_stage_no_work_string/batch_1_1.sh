#!/bin/bash
#SBATCH --mem=128G
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=128
#SBATCH --cpus-per-task=1
#SBATCH --partition=cpu
#SBATCH --account=mzu-delta-cpu
#SBATCH --job-name=myjobtest
#SBATCH --time=00:10:00
#SBATCH --constraint="scratch"
#SBATCH --output=log-8399957.out

echo "Running job on 1 nodes with 128 PEs"
./charmrun +p128 ./streamtest-8399957
touch done-8399957  # Signal job completion
