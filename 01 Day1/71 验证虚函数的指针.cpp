//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class A{
public:
    virtual void func1(){}
    virtual void func2(){}
};


class B{};

int main(){
    cout << sizeof(A) << endl;  //8
    cout << sizeof(B) << endl;  //1


    return 0;
}




//总结多态成立的条件：
//1- 有继承
//2- 子类重写父类虚函数
//  1-返回值，函数名字，函数参数都和父类一致（这样才能重写啊）
//  2-子类中virtual关键字可以不写，建议写