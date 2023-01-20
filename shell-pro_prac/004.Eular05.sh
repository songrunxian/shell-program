#!/bin/bash



#shell脚本十分慢, 改良，结合C
i=1
while [[ ${i} ]];do
	if [ $[ $(./beishu ${i} 5) + $(./beishu ${i} 1) + $(./beishu ${i} 10) ] -eq 3 ];then
		echo "kacha"${i}"kachakacha"
		break
	fi
	i=$[ ${i}+1 ]
	echo ${i}
done

