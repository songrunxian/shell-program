#!/bin/bash
declare -a arr
arr=(1 2 3 4 5 0 6 4)
res=1
zero=0
num=0
for (( i = 0; ; i++  ));do
	if [ ${arr[i]} -lt ${zero} ];then
		res=$[ ${res}*${arr[i]} ]
	else
		zero=$[ ${zero}+1 ]
		echo ${zero}
	fi
#	res=$[ ${res}*${arr[i]} ]
#	if [ ${i} -lt 13 ];then
#		continue
#	fi	
#	if [ ${arr[i-13]} ];then
#		res=$[ ${res}/${arr[i-13]} ]
#	else
#		res=$[ ${zero}=$[ ${zero}-1 ] ]
#	fi
#	if [ ${zero} -eq 0 ];then
#		if [ ${res} -gt ${num} ];then
#			num=${res}
#		fi
#	fi
done
