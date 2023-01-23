#!/bin/bash
declare -a arr
arr=(1,1,0,0)
n=0
for (( i=4; i<100; i++ ));do
	for (( j=2; j<=(i/2); j++ ));do
		if [ $[ ${i}%${j} ] -eq 0 ];then
			arr[i]=1;
			break;
		else
			arr[i]=0;
		fi
	done
done
for (( i=5; i<100; i++ ));do
	if [ ${arr[${i}]} -eq 0 ];then
		echo ${i}
	fi
done
