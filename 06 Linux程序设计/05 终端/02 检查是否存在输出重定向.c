//
// Created by prentiss on 19-4-15.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *menu[] = {
        "a - add new record",
        "d - delete record",
        "q - quit",
        NULL,
};


int getchoice(char *greet,char *choices[]){             //负责显示菜单和用户输入的函数
    int chosen = 0;
    int selected;
    char **option;

    do{
        printf("Choice : %s\n",greet);
        option = choices;
        while(*option){
            printf("%s\n",*option);
            option++;
        }
        selected = getchar();
        option = choices;
        while(*option){
            if(selected == *option[0]){
                chosen = 1;
                break;
            }
            option ++;
        }
        if(!chosen){
            printf("Incorrect choice,select again\n");
        }
    }
    while(!chosen);
    return selected;

}


int main(){

    int choice = 0;
    if(!isatty(fileno(stdout))){                    //检查设备类型 是否为终端设备
        fprintf(stderr,"You are not a terminal!\n");    //fprintf 格式化输出到文件中
        exit(1);
    }
    do{
        choice = getchoice("Please select an action",menu);      //getchoice()函数是在循环被调用的
        printf("You have chosen %c\n",choice );
    }
    while(choice != 'q');               //先do,之后再看是否while
    exit(0);




}