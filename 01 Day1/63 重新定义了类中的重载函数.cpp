//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class Base{
public:
    void func1(){
        cout << "Base::void func1()"<< endl;
    }


    void func1(int param){
        cout << "Base::void func1(int param)" << endl;
    }

    void myfunc(){
        cout << "Base::void myfunc()" << endl;
    }
};


class Derivel1:public Base{
    //Derivel1重新定义了Base类的myfunc函数，derive1可以访问func1和重载版本的函数
public:
    void myfunc(){
        cout << "Derived1::void myfunc()" <<endl;
    }
};


class Derivel2:public Base{
public:
    //Derivel2通过改变成员函数的参数列表重新定义基类func1函数，基类中继承来的其他重载版本被隐藏，不能访问
    void func1(int param1, int param2){
        cout << "Derived2::void func1(int param1,int param2)" << endl;
    }
};

class Derivel3:public Base{
public:
    //改变成员函数的返回值，基类中继承的原来的重载函数不能被访问
    int func1(int param){
        cout <<"Derived3::int func1(int param)" << endl;
        return 0;
    }
};


int main(){
    Derivel1 derivel1;
    derivel1.func1();
    derivel1.func1(20);         //有参数就自动进入有参数的方法
    derivel1.myfunc();


    cout << "---------" << endl;

    Derivel2 derivel2;
    //derivel2.func1();
    //error: too few arguments to function call, expected 2, have 0; did you mean 'Base::func1'
    //func1 被隐藏了



}