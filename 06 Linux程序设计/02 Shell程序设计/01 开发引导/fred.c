//
// Created by Prentiss on 2019-04-12.
//

#include <stdio.h>

void bill(char *arg){
    printf("bill:we passed %s\n",arg);
}



//这是第二个函数所在的文件


// gcc -c bill.c fred.c
//编译这两个函数文件