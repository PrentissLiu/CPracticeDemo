//
// Created by Prentiss on 2019-04-06.
//

//没懂
//using声明遇到相同名字的重载函数，using声明就声明了这个重载函数的所有集合。
//没懂怎么用？为什么要这样啊

#include <iostream>
using namespace std;

namespace A{
    void func(){};
    void func(int x){};
    int func(int x,int y){};
}

void test(){
    using A::func;
    func();
    func(2);
    func(4,6);
    //cout << "func()" << func(2) <<endl;
}

int main(){
    test();
    return 0;
}