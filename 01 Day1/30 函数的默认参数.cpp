//
// Created by Prentiss on 2019-04-06.
//

#include<iostream>
using namespace std;

void test(int a= 10, int b = 20){
    cout << a + b << endl;
}


int main(){
    test();
    //1.如果没有参数，就用函数的参数


    test(100);  //120
    //2.如果只有一个参数，第二个参数用函数的


    test(100,100);
    //3.两个参数都有，就用给的参数


    return 0;
}