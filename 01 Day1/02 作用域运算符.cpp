//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>

using namespace std;

int a = 10;
int main(){

    int a = 20;
    cout << "a = " << ::a << endl;
    cout << "a = " << a << endl;
    //我们可以看出来作用域符号"::"可以解决局部变量和全局变量的重名问题，访问被屏蔽的同名全局变量

    //static 编译本单元可见的东西

}