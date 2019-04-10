//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

template<class T>
class Base{
    T m;
};


template<class T>
class Child2:public Base<double>{   //继承类模版的时候，必须要确定基类的大小
public:
    T mParam;
};


void test2(){
    Child2<int>d2;
}

int main(){
    test2();

    return 0;
}