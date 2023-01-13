#!/bin/bash
arr=(`seq 0 1000`)
arr[0]=0
arr[1]=0
for(( i=3; i<=1000; i++ ));do
	for(( j=2; j<i; j++  ));do
		if [[ ${i}%${j} -eq 0 ]];then
			arr[${i}]=0
			break
		fi
	done
done
sum=0
for (( i=0; i<=1000; i++ ));do
	if [[ ${arr[${i}]} -ne 0 ]];then
		sum=$[ ${sum} + ${i} ]
	fi
done
echo ${sum}
