//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

void test(){
    int a = 10;
    int b = 20;
    int c;

    c = a > b ? a : b ;

    cout << b << endl;
    cout << a << endl;
    cout << c << endl;

}



void test01(){
    int a = 10;
    int b = 20;
    (a > b ? a : b) = 100;

    cout << "B:" << b << endl;
    //C++ 中返回的值是左值（变量的引用（而不是值本身）），因此是可以赋值的
    //C   中返回的是值本身
    //左值表示Lvalue 表示Location，内存可以寻址、可以赋值
    //右值表示Rvale  表示Read，只可以读值
}


//C语言三目运算表达式返回值为数据值，不能赋值

int main(){
    test01();
    return 0;
}