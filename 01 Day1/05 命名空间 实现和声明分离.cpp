//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;
namespace Myspace {
    void func1();
    void func2(int param);
}

void Myspace::func1(){
    cout << "Myspace::func1:" <<endl;
}

void Myspace::func2(int param) {
    cout << "Myspace::func2:" <<param <<endl;
}

int main(){
    Myspace::func1();
    Myspace::func2(2);      //原来用的时候就可以赋值了呀！开心

    return 0;

}

//这个Demo说的是声明可以和实现分离哦，声明在最前面，紧接着是后面的实现