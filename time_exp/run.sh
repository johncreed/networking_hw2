#! /bin/bash

for alpha in 0.5 0.25 0.125 0.0625 0.03125 0
do
    echo ${alpha}
    ./r08922195 50 0.1 0.1 5 0 ${alpha} > ${alpha}.log 
done
