//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

//类模版
template<class T>
class myClass{
public:
    myClass(T property){
        this->mProperty = property;
    }

public:
    T mProperty;
};


//子例实例化的时候需要具体化的负累，子类需要知道父类的具体类型是什么样的


//类模版的儿子是普通类
class SubClass:public myClass<int>{
public:
    SubClass(int b):myClass<int>(20){
        this->mB = b;
    }

public:
    int mB;
};