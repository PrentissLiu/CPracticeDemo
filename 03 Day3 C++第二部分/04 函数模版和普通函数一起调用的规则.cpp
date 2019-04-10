//
// Created by Prentiss on 2019-04-09.
//
#include <iostream>
using namespace std;


template<class T>
T myPlus(T a,T b){
    T ret = a + b;
    cout << "template" << endl;
    return ret;
}


int myPlus(int a, int b){
    int ret = a + b;
    cout << "common" << endl;
    return ret;
}

void test03(){
    int a = 10;
    int b = 20;
    char c = 'a';
    char d = 'b';

    cout << myPlus(a,b) << endl;
    //如果普通函数和模版函数都可以调用，编译器优先调用普通函数
    cout << myPlus<>(a,b) << endl;
    //分别使用两种不同的函数调用（普通函数调用和模版函数调用）


    cout << myPlus(c,d) << endl;
    //如果函数模版可以给出一个更好的匹配，那么选择模版函数

}





int main(){
    test03();
}