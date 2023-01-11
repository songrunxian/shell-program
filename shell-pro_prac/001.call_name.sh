#!/bin/bash
name=(`cat name.txt`)
read -p "please enter the num of people : " i
echo The num ${i} of people\'s name is ${name[$[${i}-1]]}
echo Now we will enter random call name system:
echo This means that when you start system and the system will provide a series names base on the name.txt
function Random() {	#与C语言函数不同，shell中echo可以取代C中的return
	Max=${#name[*]}
	Num=$RANDOM	#shell中常用的随机数生成方法1
	#Num=`data +%s` #shell中常用的随机数生成方法2
	flag=$[ ${Num}%${Max} ]
	echo ${flag}
}
fin=`Random` #shell中的函数可以理解成一个自己写好的命令
echo ${fin}
for (( i=0 ; i<=${fin} ; i++ ));do
	echo ${name[${i}]}
done
