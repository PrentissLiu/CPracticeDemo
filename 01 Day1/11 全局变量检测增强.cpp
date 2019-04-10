//
// Created by Prentiss on 2019-04-06.
//


//在C++下面编译失败，在C下面编译通过
//试了一下真的是这样诶！
//看来在C++下面 有两个一样的赋值/声明是不可以的哦（在C下面可以堪称一个是赋值，一个是声明）
//在C++就不可以了哦

#include <iostream>

int a = 10;
int a;      //当作声明，没有赋值

int main(){
    printf("a:%d\n",a);
    return EXIT_SUCCESS;
}