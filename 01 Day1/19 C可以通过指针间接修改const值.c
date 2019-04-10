//
// Created by Prentiss on 2019-04-06.
//

#include <stdio.h>

int main(){
    const int constA = 10;
    int *p = (int *)&constA;
    *p = 300;
    printf("constA:%d\n",constA);

    //通过指针间接修改const的值的意思是
    //找一个指针指向const的值，之后再改动指针的值


    printf("%d\n",*p);
}