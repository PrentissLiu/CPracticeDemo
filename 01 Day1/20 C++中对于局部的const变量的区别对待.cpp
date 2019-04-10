//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

void test1(){
    const int constA = 10;
    int *p = (int *)&constA;

    *p = 300;
    cout << constA << endl;
    cout << *p << endl;
}

//C++中运用指针间接修改const的值也是和C中类似的
//注意test1()是直接给const赋值，编译器会放到符号表中，不分配内存
//取地址的时候分配内存


void test2(){
    int b = 10;
    const int constB = b;
    int *p = (int*)&constB;
    *p = 300;
    cout << constB << endl;
    cout << *p << endl;
//注意和test1()的区别：constB是变量
//constB分配了空间，*p操作的是分配的空间；constB是从符号表获得的值
//太神奇了！！竟然第一个数返回300

}





int main(){
    test2();

    return 0;
}


//总结：
//C中编译器对待const是对待变量一样，带有一个特殊标记「不能改变」
//C++中编译器为它创建空间