//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class BigBase{
public:
    BigBase(){
        mParam = 11;
    }

    void func(){
        cout << "BigBase::func" << endl;
    }

public:
    int mParam;
};


class Base1:virtual public BigBase{};

class Base2:virtual public BigBase{};

class Derived:public Base1,public Base2{};

int main(){
    Derived derived;

    derived.func();     //哇二义性问题解决了！！真的神奇
    //啊哈哈哈哈哈哈哈哈哈哈神奇神奇神奇神奇！！！！！

    //这里的BigBase被称为虚基类

    cout << derived.mParam << endl;
    cout << sizeof(derived) << endl;        //24

    return EXIT_SUCCESS;


}