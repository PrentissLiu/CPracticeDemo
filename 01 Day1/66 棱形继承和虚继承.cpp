//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class BigBase{
public:
    BigBase(){
        mParam = 199;
    }

    void func1(){
        cout << "BigBase::func1" << endl;
    }

    int mParam;
};


class Base1:public BigBase{};

class Base2:public BigBase{};

class Derived:public  Base1,public Base2{};

int main(){

    Derived derived;

    //derived.func1();      访问不明确，不行


    cout << "derived.Base1::mParam" << derived.Base1::mParam << endl;
    //这时候这里是通过derived的Base1父类找到父父类的，同理也可以通过Base2找


    cout << "derived.Base2::mParam" << derived.Base2::mParam << endl;


    //总结：调用的二义性可以通过指定调用的哪个基类的方式来解决
    //     但是重复继承只能依靠虚基类来完成了（下一个Demo）

    return 0;
}