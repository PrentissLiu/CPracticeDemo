//
// Created by Prentiss on 2019-04-12.
//

#include <unistd.h>
#include <stdlib.h>
#include <cstring>

//系统调用read的作用是，从文件描述符fildes相关联的文件读入nbytes个字节的字节

void test(){

    char buffer[128];
    int nread;

    nread = read(0,buffer,128);
    if(nread == -1){
        write(2,"A read error has occurred\n",strlen("A read error has occurred\n"));
    }

    if(write(1,buffer,nread) != nread){
        write(2,"A write error has occured\n",strlen("A write error has occured\n"));
    }
}


int main(){
    test();

    return 0;
}