#!/bin/bash
#

for(( i=1 ; i <= 23 ; i++ ));do
	for(( j=${i}+1 ; j <= 24; j++ ));do
		if [[ $[ ${j}*$[${j}+${i}] ] -eq 500 ]];then
			printf "j=%d,i=%d\n" ${j} ${i}
			a=${j}
			b=${i}
			break
		fi
	done
done
num1=$[2*${a}*${b}]
num2=$[(${a}*${a})-(${b}*${b})]
num3=$[(${a}*${a})+(${b}*${b})]
printf "a=%d\n" ${num1}
printf "b=%f\n" ${num2}
printf "c=%f\n" ${num3}
printf "result=%d\n" $[ ${num1}*${num2}*${num3} ]
