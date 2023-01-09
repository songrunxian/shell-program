#!/bin/bash		#声明shell脚本解释器

echo 'hello world'	#这是一个注释

a=12			#shell是一种弱类型语言
a=abcdefs
a=`cat 001.sh`		#命令替换符, a 取最后一次操作的值
a=$a:a			#连接操作
echo $a

b=1
b1=2
echo ${b}:${b1}		#${}组合是为了限定变量名范围
echo '${b}:${b1}'

#特殊位置变量
echo $0
echo $1
echo $2
echo $3
echo $*
echo $@
echo $#			# #有求长度的意思
long=abbglughsueighiehgr
echo ${#long}

#特殊状态变量
echo 'gagaga'
echo $?
su hubeiga
echo $?

echo $$

${var1:=fjejwfw0}	#变量初始化,	rm ${var}/Desktop [很重要，如果var不初始化，很容易删除系统]
echo $var1

var3=0
read var3
echo $var3

str="abcdefghijklmnopqrstuvwxyz"
echo ${#str}
echo ${str:0}
echo ${str:1}
echo ${str:2:4}
#字符串剪切
name=hello_fq_1
echo ${name}
echo ${name#*_}
echo ${name##*_}
echo ${name%_*}
echo ${name%%_*}
