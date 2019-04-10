//
// Created by Prentiss on 2019-04-06.
//
#include <iostream>
using namespace std;

#define ADD(x,y) x+y


inline int add1(int x,int y){
    return x+y;
}
//inline是内联函数


void test(){
    int ret1 = ADD(10,20)*10;           //210   预定义函数就会有奇怪的问题
    int ret2 = add1(10,20)*10;          //300

    cout << ret1 << endl;
    cout << ret2 << endl;
}


int main(){
    test();
    return 0;
}