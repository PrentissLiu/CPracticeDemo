//
// Created by Prentiss on 2019-04-06.
//


#include <iostream>


typedef enum COLOR{
    GREEN,RED,YELLOW
}color;

int main(){
    color mycolor = GREEN;
    mycolor = 10;
    //在C下面不同类型的变量是可以直接赋值的
    //error: assigning to 'color' (aka 'COLOR') from incompatible type 'int'
    //error: cannot initialize a variable of type 'char *' with an rvalue of type 'void *'
    //C++下面不同类型的type是不可以直接赋值的

    printf("mycolor:%d\n",mycolor);
    char *p = malloc(10);
    return EXIT_SUCCESS;
}