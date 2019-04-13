//
// Created by prentiss on 19-4-13.
//

#include <stdlib.h>
#define _GNU_SOURCE

#include <getopt.h>
#include <stdio.h>

//这样我们就可以编辑带有长参数和短参数的程序啦


int main(int argc,char *argv[]){
    int opt;

    struct option longopts[] = {
            { "initialize",0,NULL,'i'},
            { "file",1,NULL, 'f' },
            { "restart", 0,NULL, 'r'},
            { 0,0,0,0 }
    };

    while((opt = getopt_long(argc,argv,":if:lr",longopts,NULL)) != 1){
        switch(opt){
            case 'i':
            case 'l':
            case 'r':
                printf("option %c\n",opt);
                break;
            case ':':
                printf("option needs a value\n");
                break;
            case '?':
                printf("unknown option:%c\n",optopt);
                break;

        }

    }
    for(;optind < argc ; optind++)
        printf("argument %s\n",argv[optind]);

    return 0;
}






