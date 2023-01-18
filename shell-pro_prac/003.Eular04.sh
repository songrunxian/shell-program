#!/bin/bash
res=0
fin=0
temp=0
rres=0
for (( i=100; i <= 999; i++ ));do
	for (( j=100; j <= 999; j++ ));do
		newers=0
		res=$[ ${i}*${j} ]
		rres=${res}
		while [[ ${res} -ne 0 ]] ;do
			temp=$[ ${res}%10 ]
			newers=$[ $[ ${newers}*10 ]+${temp} ]
			res=$[ ${res}/10 ]
			if [ ${newers} -eq ${rres} ];then
			       if [ ${rres} -gt ${fin} ];then
				       fin=${rres}
			       fi
			fi
		done
	done
done
echo "result is ${fin}"
