//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

void Test1(int a, int b,int){
    cout << a + b << endl;

}


void Test2(int a , int b , int = 10){
    cout << a + b  << endl;
}


int main(){
    Test1(10,20,30);        //占位的int 也是参数，必须传参数

    Test2(10,20,3);         //占位的参数也可以给一个默认值

    return 0;
}