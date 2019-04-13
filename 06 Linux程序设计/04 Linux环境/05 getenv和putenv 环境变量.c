//
// Created by prentiss on 19-4-13.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char *var,*value;

    if(argc ==1 || argc >3){
        fprintf(stderr,"usage:environ var [value]\n");      //没有给参数或者给的参数与过多
        exit(1);
    }

    //调用getenv从环境中取出变量的值

    var = argv[1];                  //输入的第一个(实际上是第二个参数)保存为var
    value = getenv(var);            //利用getenv()函数获得value
    if(value)
        printf("Variable %s has value %s\n",var,value);
    else
        printf("Variable %s has no value\n",var);


    //检查程序调用的第二个参数

    if(argc ==3){
        char *string;
        value = argv[2];
        string = malloc(strlen(var)+strlen(value)+2);       //string是一个指针
        if(!string){
            fprintf(stderr,"out of memory\n");             //Standard error output stream.
            exit(1);
        }
        strcpy(string,var);                                 //copy   SRC to dest
        strcat(string,"=");                                 //append SRC to dest
        strcat(string,value);
        printf("Calling putenv with %s\n",string);
    if(putenv(string)== 0){
        fprintf(stderr,"putenv failed\n");
        free(string);
        exit(1);
        }


        //调用getenv检查变量的新值

        value = getenv(var);
        if(value)
            printf("New value of %s is %s\n",var,value);
        else
            printf("New value of %s is null??\n",var);
    }


    //变量的值不会反映到外部环境中,是因为子进程不会传播到父进程中



}

//      ./05_getenv_putenv HOM

//      ./05_getenv_putenv FRED hello