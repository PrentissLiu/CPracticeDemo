//
// Created by Prentiss on 2019-04-06.
//

#include <stdio.h>

int func1(i){
    printf("%d\n",i);
    return 0;
    //惊了，没有类型的变量竟然返回的是1
}


int func2(i){
    printf("%s\n",i);
    return 0;
}


int func3(){
    printf("hahahhahahahh\n");
    return 0;
    //没有写任何参数，表示可以传任何的参数
    //但是C++下并不能通过（错！) 可以通过！我用的苹果的编译器！！
}


int func4(void){
    printf("hahahhaahhah\n");
    //C语言下函数没有参数，建议写void
    return  0;
}

int main(){
    func3(1,2,3);   //没有写参数，可以随便传也能通过hhh

    return 0;
}