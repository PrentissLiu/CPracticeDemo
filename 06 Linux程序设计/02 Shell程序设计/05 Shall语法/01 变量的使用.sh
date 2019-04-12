#!/bin/sh


myvar="Hi there!"

echo $myvar

echo '$myvar'
echo \$myvar
#这两个的效果都是一样的


echo Enter something
read myvar
#read是从命令行读取什么


echo $myvar


exit 0