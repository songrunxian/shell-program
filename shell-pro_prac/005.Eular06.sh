sum1=0
sum2=0
sum3=0
read n
for (( i = 1; ${i} <= ${n}; i++ ));do
	sum1=$[ ${sum1}+$(./pow ${i} 2) ]
	#echo ${sum1}
done
for (( i=1; ${i} <= ${n}; i++ ));do
	sum2=$[ ${sum2}+${i} ]
done
sum3=$(./pow ${sum2} 2)
echo $[${sum3}-${sum1}]
