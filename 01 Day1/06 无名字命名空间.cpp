//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>

using namespace std;

namespace{
    int a = 10;
    void func(){
        cout << "Hello Prentiss" << endl;
    }
}

void test(){
    cout <<"a:" << endl;
    func(); //没有命名的命名空间直接可以在本文件内部访问，相当于给标识符添加了static，作为内部的链接
}

int main(){
    test();
    return 0;
}