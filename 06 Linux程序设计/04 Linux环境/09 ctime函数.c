//
// Created by Prentiss on 2019-04-15.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    time_t timeval;

    (void)time(&timeval);

    printf("the data is :%s\n",ctime(&timeval));


    //the data is :Mon Apr 15 11:24:11 2019
    //时间值转换成可读的字符串，之后打印他

    return 0;
}