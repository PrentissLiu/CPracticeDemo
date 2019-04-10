//
// Created by Prentiss on 2019-04-06.
//

#include <stdio.h>
#include <stdbool.h>

void test(){
    bool flag = true;
    printf("%d\n",flag);


    flag = 100;
    printf("%d\n",flag);

    flag = 0;
    printf("%d\n",flag);

    //C下有了stdbool.h 用法和C++就基本上一样啦
    //也是赋值不是0的时候就自动转换成1

}

int main(){
    test();
}