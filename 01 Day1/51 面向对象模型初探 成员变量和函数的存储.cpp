//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class MyClass01{
public:
    int mA;

};


//静态数据成员
class MyClass02{
public:
    int mA;
    static int sB;
};


class MyClass03{
public:
    //非静态成员函数
    void printMyClass(){
        cout << "Hello World" << endl;
    }

public:
    int mA;
    static int sB;
};



class MyClass04{
public:
    void printMyClass(){
        cout << "Hello World" << endl;
    }

    //静态成员函数
    static void ShowMyClass(){
        cout << "Hello World" << endl;
    }

public:
    int mA;
    static int sB;
};


int main(){
    MyClass01 myClass01;
    MyClass02 myClass02;
    MyClass03 myClass03;
    MyClass04 myClass04;

    cout << "1---" << sizeof(myClass01) << endl;


    //静态数据成员没有保存到类对象中
    cout << "2---" << sizeof(myClass02) << endl;


    //非静态成员函数也没有保存到类对象中
    cout << "3---" << sizeof(myClass03) << endl;



    //静态成员函数也没有保存到类对象中
    cout << "4---" << sizeof(myClass04) << endl;


    //总结：C++类对象中的变量和函数是分开存储的

    return 0;
}