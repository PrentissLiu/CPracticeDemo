//
// Created by prentiss on 19-4-15.
//

#include <stdio.h>
#include <stdlib.h>

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
    do{
        choice = getchoice("Please select an action",menu);
        printf("You have chosen: %c\n",choice);
    }
    while(choice != 'q');
    exit(0);
}