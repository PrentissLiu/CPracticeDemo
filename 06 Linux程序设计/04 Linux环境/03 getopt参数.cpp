//
// Created by prentiss on 19-4-13.
//

#include <stdio.h>
#include <unistd.h>
//getopt()函数的处处就是unistd.h文件

#include <stdlib.h>


int main(int argc,char *argv[]){
    int opt;
    while((opt = getopt(argc,argv,":if:lr")) != -1){
        //这里用到了神奇的getopt()函数

        //选项字符串 "a:b:cd::e" 对应到命令行是-a -b -c -d -e

        //#include <unistd.h>
        //
        //int getopt(int argc, char * const argv[], const char *optstring);
        //                     当前选项参数字符串
        //extern char *optarg;
        //extern int optind, opterr, optopt;


        //选项参数  -l 类似于这样

        switch(opt){
            case 'i':
            case 'l':
            case 'r':
                printf("option:%c\n",opt);
                break;
            case 'f':
                printf("filename:  %s\n",optarg);
                break;

            case ':':
                printf("option needs a value\n");
                break;
            case '?':
                printf("unknown option:%c\n",optopt);
                break;

        }
    }
    for(;optind < argc ;optind++)
        printf("argument: %s\n",argv[optind]);
    return 0;


}


//    ./03_getopt -i -lr 'hi there' -f fred.c -q
//      太神奇了 后面自带的参数竟然被自动处理了!这是什么原理啊太神奇辽