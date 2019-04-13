//
// Created by Prentiss on 2019-04-13.
//

#include <unistd.h>
#include <stdio.h>
#include <dirent.h>     //目录中的信息
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>


void printDir(char *dir,int depth){
    DIR *dp;


    struct dirent *entry;
    struct stat statbuf;
    

    if((dp = opendir(dir))== NULL){             //打开一个目录并且建立一个目录流，成功返回指向DIR结构的指针

        fprintf(stderr,"Cannot open directory: %s\n",dir);      //输出送到一个指定的文件流
    }
    chdir(dir);                                 //切换目录，若打开目录成功，就进入目录
//这里不知道是哪里的问题啊= =


    while(((entry = readdir(dp)) != NULL)){
        lstat(entry -> d_name,&statbuf);        //通过文件名找到对应的状态 这个结构中包含entry是dirent的结构
                                                //ino_t d_ino 文件的inode节点号
                                                //char d_name[] 文件的名字
                                                //mode_t st_mode 文件的权限和类型信息


        if(S_ISDIR(statbuf.st_mode)){

            if(strcmp(".",entry -> d_name) == 0 || strcmp("..",entry->d_name)==0 )
                continue;
            printf("%*s%s\n",depth,"",entry->d_name);

            printDir(entry->d_name,depth+4);    //printDir函数调用自己，并且进入下一个目录，缩紧四个字节
        }

        else printf("%d  %s\n",depth,entry->d_name);


    }
    chdir("..");            //这一步是返回到上一个文件夹

    closedir(dp);           //关闭一个目录并且释放与之关联的资源


}

int main(){
    printf("Direct scanof /home:\n");
    printDir(("/home/"),0);

    printf("done\n");

    return 0;
}



// grep "struct XXX" /usr/include -r    递归文件内搜索