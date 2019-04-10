//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;
void test(){
    cout << sizeof(false) << endl;
    //Bool类型占据一个字节


    bool flag = true;
    flag = 100;

    cout << flag << endl;

    flag = 0;
    cout << flag << endl;

    //给Bool赋值的时候，如果不是0，自动转换成1；如果是0，就还是0
}

int main(){
    test();
}