//
// Created by Prentiss on 2019-04-06.
//

#include <stdio.h>

const int constA = 10;

int main(){

    int *p = (int *)&constA;
    //*p = 200;

    printf("%d\n",*p);  //取指针的值
    printf("%d\n",&p);  //取指针的地址..太好玩辽

    return 0;
}