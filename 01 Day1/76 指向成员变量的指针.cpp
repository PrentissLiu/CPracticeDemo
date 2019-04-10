//
// Created by Prentiss on 2019-04-08.
//

//注意这里是指向成员变量的指针

#include <iostream>
using namespace std;

class A{
public:
    A(int param){
        mParam = param;
    }
public:
    int mParam;
};

void test(){
    A a1(100);

    int* p1 = &a1.mParam;           //写法1：定义一个p1指针，指向对象a1的mParam变量


    int A::*p2 = &A::mParam;        //写法2：定义一个类A中的指针，指向类A中的mParam变量

    cout << "*p1  " << *p1 << endl;
    cout << "a1.*p2    " << a1.*p2 <<  endl;



    A* a2 = new A(200);             //写法3：类A的指针a2，指向一个新的类A（200）
    cout << "a2->*p2    "<< a2->*p2 << endl;
}

int main(){
    test();

    return 0;
}