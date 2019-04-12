//
// Created by Prentiss on 2019-04-12.
//

//一个静态库的实验

#include <stdio.h>
#include "mylib.h"

int main(){

    bill("Hello World");                //char* 原来是字符串？？喵喵喵

    fred(5);

    return 0;
}


//gcc -c bill.c fred.c
//首先要编译链接的文件（函数库）

// gcc -c program.c
//再编译主文件

// gcc -o program program.o bill.o fred.o
//链接各个文件

//  ./program
//在控制台执行程序


//ar crv libfoo.a  bill.o fred.o
//用ar 命令创建一个ar程序的归档（创建归档文件或者集合

//ranlib libfoo.a
//同样使用ranlib命令也可以创建一个文档包

//gcc  -o program program.o libfoo.a
//创建好文档包之后我们就可以在文件列表中添加库文件创建程序了

//  ./program
//就可以正常运行了