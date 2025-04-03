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
#SBATCH --output=log-1770976.out

export FI_CXI_DEFAULT_CQ_SIZE=131072
export FI_CXI_OFLOW_BUF_SIZE=8388608
export FI_CXI_CQ_FILL_PERCENT=20

echo "Running job on 1 nodes with 128 PEs"
./charmrun +p128 ./streamtest-1770976
touch done-1770976  # Signal job completion
