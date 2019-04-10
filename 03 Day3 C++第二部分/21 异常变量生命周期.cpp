//
// Created by Prentiss on 2019-04-09.
//

//完全不知道这个异常的生命周期是想说什么东西= = 什么鬼了啦
#include <iostream>
using namespace std;

class myException{
public:
    myException(){
        cout << "异常变量构造" << endl;
    }

    myException(const myException &e){
        cout << "拷贝构造" << endl;
    }

    ~myException(){
        cout << "异常变量析构" << endl;
    }
};

void DoWork(){
    throw new myException();
}

void test01(){
    try{
        DoWork();

    }

    catch(myException e){
        cout << "捕获异常" << endl;
    }
}


void test02(){
    try{
        DoWork();
    }
    catch(myException *e){
        cout << "捕获异常" << endl;
        delete e;
    }
}

int main(){
    test01();

    return 0;
}