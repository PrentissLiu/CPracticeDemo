//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
/*
int func1(i){
    printf("%d\n",i);
    return 0;
    //没有写类型，不能通过
}

int func2(i){
    printf("%s\n",i);
    return 0;
    //没有写类型，不能通过
}
*/
int func3(){
    printf("hahahhahahahh\n");
    return 0;
    //没有写任何参数，表示可以传任何的参数
    //但是C++下并不能通过（书上说不能通过）
    //其实
}


int func4(void){
    printf("hahahhaahhah\n");
    //C语言下函数没有参数，建议写void
    //C++也可以通过的诶
    return  0;
}

int main(){
    func3(1,2,3);   //没有写参数就不能瞎传了哈哈哈哈哈哈不能通过！


    return 0;
}



//总结：
//C++中，int fun() 和int fun(void) 是相同意义的，都表示返回值是int的无参数函数
//C中，  int fun()表示返回值为int，接受任何参数的函数；int fun(void)表示返回值为int的无参数函数