//
// Created by Prentiss on 2019-04-16.
//

#include <termios.h>
#include <stdio.h>
#include <stdlib.h>


#define PASSWORD_LEN 8

int main(){
    struct termios initialresettings,newrsettings;
    char password[PASSWORD_LEN + 1];                //长度加一个是为了'/0' 吗

    tcgetattr(fileno(stdin), &initialresettings);
    //获取标准输入的当前设置，保存到termios结构中


    newrsettings = initialresettings;
    newrsettings.c_lflag &= ~ECHO;      //语法结构: X& = ~FLAG      //清除变量X中由FLAG标志定义的比特

    printf("Enter password:");


    if(tcsetattr(fileno(stdin), TCSAFLUSH, &newrsettings) != 0){
        fprintf(stderr,"Could not set attribute\n");            //格式化输出到流中

    }else{
        fgets(password, PASSWORD_LEN, stdin);                   //获取到流中
        tcsetattr(fileno(stdin), TCSANOW, &initialresettings);
        fprintf(stdout,"\n You entered %s\n",password);
    }
    exit(0);
}