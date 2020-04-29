#! /bin/bash

minlen=1000000000
for alpha in 0.5 0.25 0.125 0.0625 0.03125 0
do
    len=`wc -l ${alpha}.log | awk '{print $1}'` 
    echo ${len}
    if [[ ${len} -le ${minlen} ]]
    then
        minlen=${len}
    fi
done


for alpha in 0.5 0.25 0.125 0.0625 0.03125 0
do
    head -n ${minlen} ${alpha}.log > ${alpha}.tmp
done

paste -d ',' 0.5.tmp 0.25.tmp 0.125.tmp 0.0625.tmp 0.03125.tmp 0.tmp > merge.txt
head merge.txt

rm *.tmp

