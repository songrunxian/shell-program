#!/bin/bash
#

declare -a data
data=(1,1)

for(( i = 2; i <= 10; i++  ));do
	data[i]=0
done

for (( i = 2 ; i <= 10 ; i++ ));do
	if [ ${data[${i}]} -eq 1 ];then
		continue
	fi
	for (( j = $[2*${i}] ; j <= 10 ; j += i ));do
		data[${j}]=1
	done
done
sum=0
for(( i = 2 ; i <= 10 ; i++  ));do
	if [ ${data[${i}]} -eq 0 ];then
		sum=$[ ${sum}+${i} ]
	fi
done
echo ${sum}
