//
// Created by Prentiss on 2019-04-06.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(){
    int a = 10;
    int b = 20;

    printf("%d\n",a>b?a:b);

    (a > b ? a : b) = 100;
    //哈哈哈哈哈哈哈这里出错了！
    //说明C语言中这里不能赋值







}

//C语言三目运算表达式返回值为数据值，不能赋值

int main(){
    test();
    return 0;
}