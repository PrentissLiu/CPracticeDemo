//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

template <class T>
T myPlus(T a,T b){
    T ret = a + b;
    cout << ret << endl;
    return ret;
}


int myPlas(int a,char b){
    int ret = a + b;
    cout << ret << endl;
    return ret;
}

void test(){
    int a = 10;
    char b = 'a';


    myPlas(a,a);
    myPlas(b,b);            //返回的是两个ASCII码之和的值诶
    myPlas(a,b);            //普通函数可以隐式类型转换（也就可以自动类型转换）


    myPlus(a,a);
    //myPlus(a,b);          //函数模版不允许自动类型转换，需要严格匹配类型
}


int main(){

    test();

    return 0;
}