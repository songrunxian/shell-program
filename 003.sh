#/bin/bash
#字符串操作
str="ahfhasheg heughhggklr"
echo ${str}
echo ${#str}
echo ${str:2}
echo ${str:2:5}
name="STDHE_1.fq.gz"
echo ${name#*.}
echo ${name##*.}
echo ${name%.*}
echo ${name%%.*}
#替换
str1="name_name_name"
echo ${str1/name/srx}
echo ${str1//name/srx}
echo ${str1/#name/wws}
echo ${str1/%name/wps}
#全体大小写转化
str2="dhshfwefASDWFWqF"
echo ${str2,,}
echo ${str2^^}
#首大小写转化
str3="dhshfwefASDWFWqF"
echo ${str3^}
echo ${str3,}

