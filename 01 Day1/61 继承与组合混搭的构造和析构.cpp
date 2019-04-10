//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;


class D{
public:
    D(){
        cout << "D 构造函数" << endl;
    }

    ~D(){
        cout << "D 析构函数" << endl;
    }
};

class A{
public:
    A(){
        cout << "A 构造函数" << endl;
    }
    ~A(){
        cout << "A 析构函数" << endl;
    }
};

class B:public A{
public:
    B(){
        cout << "B 构造函数" << endl;
    }
    ~B(){
        cout << "B 析构函数" << endl;
    }
};

class C:public B{
public:
    C(){
        cout << "C 构造函数" << endl;
    }
    ~C(){
        cout << "C 析构函数" << endl;
    }

public:
    D c;            //构造函数运行Class C之前要去D那变转一圈 因此先D构造函数 再C构造函数
};

void test(){
    C c;
}


int main(){
    test();

    return 0;
}

//A 构造函数
//B 构造函数
//D 构造函数
//C 构造函数
//C 析构函数
//D 析构函数
//B 析构函数
//A 析构函数