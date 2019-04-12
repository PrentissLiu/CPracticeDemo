//
// Created by Prentiss on 2019-04-12.
//

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void test(){
    char c;
    int in,out;

    in = open("05_file.txt",O_RDONLY);
    out = open("05_fileout.txt",O_WRONLY | O_CREAT,S_IRUSR | S_IWUSR);
    while(read(in,&c,1) == 1)
        write(out,&c,1);

}


int main(){
    test();


    return 0;

}

//gcc 05\ 一个文件复制程序.c -o 05_copyfile
//编译成了一个可运行的文件

// ./05_copyfile 就可以运行啦 哈哈哈哈开心