//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class Base{
public:
    Base():mParam(0){}

    void Print(){
        cout << mParam << endl;
    }

public:
    int mParam;
};


class Derived:public Base{
public:
    Derived():mParam(10){}


    void Print(){
        cout << Base::mParam<< endl;        //想用父类的名字
        cout << mParam << endl;
    }

    //返回父类重名的成员
    int& getBaseParam(){
        return Base::mParam;
    }

public:
    int mParam;
};


int main(){
    Derived derived;
    cout << derived.mParam << endl;


    derived.getBaseParam() = 100;           //方法也可以赋值喔..神奇！
    derived.Print();                        //调用方法打印，把打印写到方法里就好了


    cout << "类外访问："<<  derived.getBaseParam() << endl;



    return EXIT_SUCCESS;
}