//
// Created by prentiss on 19-4-13.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int arg;
    for(arg = 0;arg < argc ;arg++){                     //检查第一个参数是不是0
        if(argv[arg][0] == 0)
            printf("option:%s\n",argv[arg]+1);
        else
            printf("argument: %d:%s\n",arg,argv[arg]);
    }

    return 0;
}