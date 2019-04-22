//
// Created by prentiss on 19-4-15.
//

#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    //我们试图打开一个不存在的文件
    f = fopen("Not_here","r");
    if(!f){
        syslog(LOG_ERR | LOG_USER,"opps - %m\n");

    }
    exit(0);
}


//没有看到有输出,但是在 /var/log/message 文件下能看到一行字
//但是Ubuntu下就没有这个文件啊...

//  LOG_EMERG   紧急情况
//  LOG_ALERT   高级优先故障
//  LOG_CRIT    严重错误
//  LOG_ERR     错误
//  LOG_WARNING 需要注意的特殊情况
//  LOG_NOTICE
//  LOG_INFO    一般信息
//  LOG_DEBUG   调试信息