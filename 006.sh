#!/bin/bash
declare -a arr
arr=(1 2 3 4 5)
echo ${arr[*]}
echo ${arr[@]}
echo ${!arr[*]}
declare -a arr1
arr1=(`ls`)
echo ${arr1[*]}
echo ${arr1[@]}
echo ${!arr1[*]}
echo ${arr1}
echo ${arr1[*]}
echo ${#arr1}	 #求数组第一个元素的长度
echo ${#arr1[*]} #求数组的长度
arr1[1002]="bulibuli"
echo ${arr1[*]}
echo ${#arr1[*]} #求数组的长度
echo ${!arr1[*]}
unset arr1[1002]
echo ${arr1[*]}
echo ${!arr1[*]}
arr2[0]=a
arr2[1]=b
arr2[2]=c
echo ${arr2[*]}
arr1+=(a b c d f g r)
echo ${arr1[@]}
