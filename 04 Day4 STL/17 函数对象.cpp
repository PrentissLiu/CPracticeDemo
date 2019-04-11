//
// Created by Prentiss on 2019-04-11.
//

//函数对象是重载了函数调用符号的类
//函数对象（仿函数）是一个类，不是一个函数

#include <iostream>
#include <vector>

using namespace std;

//函数对象是重载了的函数调用符号的类
class myPrint{
public:
    myPrint(){
        m_Num = 0;

    }
public:
    int m_Num;


public:
    void operator()(int num){
        cout << num << endl;
        m_Num ++;
    }
};


//函数对象
//重载了的操作符的实例化的对象，可以像普通函数那样调用，可以有参数和返回值
void test1(){
    myPrint myPrint1;
    myPrint1(20);
}



//函数对象超出了普通函数的概念，可以保存函数的调用状态
void test2(){
    myPrint myPrint1;
    myPrint1(20);
    myPrint1(20);
    myPrint1(20);
    cout << myPrint1.m_Num << endl;
}


void doBusiness(myPrint print,int num){
    print(num);
}



//函数对象作为参数
void test3(){
    doBusiness(myPrint(),30);

}


int main(){
    test3();


    return 0;
}

//函数对象通常不定义构造函数和析构函数，构造和析构的时候不会存在问题
//函数对象超出平常的状态，函数对象可以有自己的状态
//函数对象可以内联编译，用函数指针基本不可能
