//
// Created by prentiss on 19-4-15.
//

#include <syslog.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    int logmask;
    openlog("logmask",LOG_PID|LOG_CONS, LOG_USER);
    syslog(LOG_INFO,"information message,pid = %d\n",getpid());         //写入log的时候加上getpid()
    logmask = setlogmask(LOG_UPTO(LOG_NOTICE));
    syslog(LOG_DEBUG,"debug message, should not appear");

    exit(0);


    //同样没有在/var/log/message 找到文件啊,这是为什么呢...
}
