//
// Created by Prentiss on 2019-04-09.
//


//栈的解旋unwinding
//这个Demo主要用来研究一下try块是挨个如何创建对象，如何析构对象的 有趣！
#include <iostream>
using namespace std;

class Person{
public:
    Person(string name){
        mName = name;
        cout << mName << "mName被创建" << endl;
    }
    ~Person(){
        cout << mName << "对象被析构" << endl;
    }


public:
    string mName;
};


void test(){
    Person p1("aaaa");
    Person p2("hahahahahhah");
    Person p3("huohuohuhuohuohuohuo");

}


int main(){
    try {
        test();
    }

    catch(...){
        cout << "捕获了不少异常诶好愉快" << endl;
    }


    return 0;

}