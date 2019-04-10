//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

//1-非 纯虚析构函数
class A{
public:
    virtual ~A();
};

A::~A() {}



//2-纯析构函数
class B{
public:
    virtual ~B()= 0;        //virtual加上=0就是纯析构函数了，不能实例化
};

B::~B() {}

void test(){
    A a;    //A类可以实例化
    //B b;
    //error: variable type 'B' is an abstract class
    //B是一个抽象类，不能实例化
}

int main(){
    test();

    return 0;
}

//总结：如果类的目的不是为了实现多态，作为基类来使用，就不要声明虚析构函数