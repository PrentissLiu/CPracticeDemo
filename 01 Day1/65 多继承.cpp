//
// Created by Prentiss on 2019-04-08.
//

//这就尴尬了，不知道是在哪个类里面的继承过来，就容易出问题（二义性）

#include <iostream>
using namespace std;

class Base{
public:
    void func1(){
        cout << "Base1::func1" << endl;
    }
};


class Base2{
public:
    void func1(){
        cout << "Base2::func1" << endl;
    }
    void func2(){
        cout << "Base2::func2" << endl;
    }
};


class Derived:public Base,public Base2{};

int main(){
    Derived derived;
    //derived.func1();

    //member 'func1' found in multiple base classes of different types

    return 0;
}