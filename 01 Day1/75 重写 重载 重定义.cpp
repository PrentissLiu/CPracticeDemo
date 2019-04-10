//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class A{
public:
    //同一个作用域下，func()函数重载
    void func1(){}
    void func1(int a){}
    void func1(int a,int b){}
    void func2(){}
    virtual void func3(){}

};


class B:public A{
    //重定义了func2()方法，基类的func2方法被隐藏
    void func2(){}

    //类似地，重写了基类的func3()方法
    virtual void func3(){}
};