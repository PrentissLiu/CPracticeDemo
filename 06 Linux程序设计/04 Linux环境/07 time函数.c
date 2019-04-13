//
// Created by prentiss on 19-4-13.
//

#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int i;
    time_t the_time;
    //__time_t 是时间的一个类 in types.h
    //time_t 是time_t.h 的一个typedef



    for(i = 1;i < 10;i++){
        the_time = time((time_t *)0);           //time函数   需要一个指向time_t的指针作为参数
        printf("the time is %ld\n",the_time);
        sleep(1);
    }


    return 0;
}