//
// Created by prentiss on 19-4-13.
//

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    struct tm *tm_ptr;
    time_t the_time;

    (void)time(&the_time);
    tm_ptr = gmtime(&the_time);

    printf("Raw time is %ld\n",the_time);

    printf("date: %02d/%02d/%02d\n",tm_ptr->tm_hour,tm_ptr->tm_min,tm_ptr->tm_sec);


    return 0;

}