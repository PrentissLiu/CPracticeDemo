//
// Created by prentiss on 19-4-13.
//

#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(){
    char **env = environ;               //这里为什么用指针的指针
    while(*env){
        printf("%s\n",*env);            //这里取指针的值是　*env,因此指向他的指针就是**env,第11行就可以说清楚了
        env++;                          //指针增加一个


    }

    return 0;
}