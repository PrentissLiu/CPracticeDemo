//
// Created by Prentiss on 2019-04-15.
//

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    struct tm *tm_ptr,timestruct;
    time_t the_time;
    char buf[256];

    (void) time(&the_time);
    tm_ptr = localtime(&the_time);

    strftime(buf,256,"%A %d %B, %I:%S %p",tm_ptr);

    printf("%s\n",buf);

    strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &the_time);
    //00 Jan 1900 00:00

    puts(buf);

    return 0;

}

//strftime把一个the_time结构格式化成为一个字符串
//参数：format为输出的格式

//char *strptime(const char *buf,const char *format,struct tm *timeptr)
//strptime是讲一个字符串格式化为一个tm结构




//星期几的简写形式      %a

//星期几的全称        %A


//月份的简写形式       %b

//月份的全称          %B

//日期和时间          %c

//月份中的日期,0-31   %d

//小时,00-23         %H

//12进制小时钟点,01-12    %I

//年份中的日期,001-366    %j

//年份中的月份,01-12      %m

//分,00-59               %M

//上午或下午             %p

//秒,00-60               %S

//星期几,1-7             %u

//星期几,0-6             %w

//当地格式的日期          %x