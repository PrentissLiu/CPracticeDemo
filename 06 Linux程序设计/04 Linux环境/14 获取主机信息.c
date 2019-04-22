//
// Created by prentiss on 19-4-15.
//

#include <sys/utsname.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char computer[256];
    struct utsname uts;

    if(gethostname(computer,255) != 0 || uname(&uts) < 0){
        fprintf(stderr,"Could not get host information\n");
        exit(1);
    }

    printf("Computer host name is %s\n",computer);              //显示计算机的主机名称
    printf("System is %s on %s hardware\n",uts.sysname,uts.machine);    //显示操作系统版本
    printf("Version is %s,%s\n",uts.release,uts.version);           //系统版本号
    exit(0);
}