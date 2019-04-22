//
// Created by Prentiss on 2019-04-15.
//


//临时文件是程序的临时数据库
//tmpnam函数可以生成唯一的文件名


#include <stdio.h>
//char *tmpam(char *s)


#include <stdlib.h>

int main(){

    char *filename;
    FILE *tmpfp;

    filename = tmpnam(NULL);        //但是这个被替换了哦

    puts(filename);

    printf("Temporary file name is :%s\n",filename);

    puts(tmpnam(NULL));


    if(tmpfp){
        printf("Opened a temporary file OK\n");

    }else
        perror("tmpfile");          //错误函数


    return 0;
}


//运行就可以看出打印出来的生成的唯一文件名