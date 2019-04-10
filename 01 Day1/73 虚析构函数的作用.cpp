//
// Created by Prentiss on 2019-04-08.
//

//没有编译通过，根本不知道是哪里的错误

#include <iostream>
using namespace std;

class People{
public:
    People(){
        cout << "People 构造函数" << endl;
    }

    virtual void showName() = 0;
    virtual ~People(){
        cout << "People 析构函数" << endl;
    }
};


class Worker:public People{
public:
    Worker() {
        cout << "Worker 构造函数" << endl;
    }

    virtual void showName()=0;
    virtual ~Worker(){
        cout << "Worker 构造函数" << endl;
        if(pName != NULL)
            delete pName;
    }

public:
    char* pName;
};


void test{
    People* people = new Worker;
    people-> ~People();


};


int main(){
    test();

    return 0;
}