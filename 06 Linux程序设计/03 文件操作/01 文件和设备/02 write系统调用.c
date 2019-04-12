//
// Created by Prentiss on 2019-04-12.
//

#include <unistd.h>
#include <stdlib.h>

int main(){
    if(write(1,"helloWorld",20)!= 20)
        write(2,"A write error has occurred on file descriptor 1\n",46);


    return 0;
}

//把缓冲区buf的前nbytes个字节写入描述符fildes关联的文件中，返回的是实际写入的字节数