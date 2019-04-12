//
// Created by Prentiss on 2019-04-12.
//

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void test(){
    char block[1024];
    int in,out;
    int nread;

    in = open("06_file.txt",O_RDONLY);
    out = open("06_fileout.txt",O_WRONLY | O_CREAT,S_IRUSR | S_IRUSR);
    while((nread = read(in,block,sizeof(block))) > 0){
        write(out,block,nread);
    }

    //这个程序相比之前的好处是1024一个文件块，相比函数调用的时间少了
}

int main(){
    test();

    return 0;
}