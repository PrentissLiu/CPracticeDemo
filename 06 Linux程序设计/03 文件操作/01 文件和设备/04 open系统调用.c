//
// Created by Prentiss on 2019-04-12.
//

//为了创建一个新的文件描述符，需要使用open系统调用


#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int open(const char *path,int oflags);
int open(const char *path,int oflags,mode_t mode);

// O_RDONLY O_WRONLY O_RDWR
// O_APPEND 写入数据追加在文件末尾
// O_TRUNC  文件长度设置为0
// O_EXCL   和O_CREAT 一起用，保证创建出文件




//读权限
//S_IRUSR