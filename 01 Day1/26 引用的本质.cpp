//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

//引用的本质是一个指针常量

//发现是引用，转换为 int* const ref = &a;
void test(int& ref){
    ref = 100;  //ref是引用，转换为*ref = 100
}

int main(){
    int a = 10;
    int& aRef  = a; //这个时候自动转换为int *const aRef = &a

    aRef = 20;

    test(a);

    cout << a << endl;
    cout << aRef << endl;

    return 0;
}