#!/bin/bash	
#输入输出 read echo printf
var=0
read -p "please enter var's value : " var
read -p "please enter your key in 5s : " -t 5 -s key
echo -e "\n"	#-e 开启转义 
echo "\"hello ahhhhh\""
echo $key
printf "%s hello world\n" "srx" #可以直接使用换行符，不用开启-e

function _func_() {
	echo -e "hhhhhh"
	return
}

_func_			#函数调用

#if [[   ]]; then	[[]]:这叫test表达式
#fi
#
#if [[   ]]; then
#elif [[   ]]
#else 
#fi
