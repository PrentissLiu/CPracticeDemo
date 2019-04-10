//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;


class BigBase{
public:
    BigBase(int x){
        mParam = x;
    }

    void func(){
        cout << "BigBase::func" << endl;
    }

    int mParam;
};


class Base1:virtual public BigBase{
public:
    Base1():BigBase(10){}   //不会调用BigBase构造
};


class Base2:virtual public BigBase{
public:
    Base2():BigBase(10){}   //同样不会调用BigBase构造
};



class Derived:public Base1,public Base2{
public:
    Derived():BigBase(10){}
};


int main(){
    Derived derived;

    return EXIT_SUCCESS;
}

//总结：我们可以看出来每一个继承的子类都需要书写初始化语句