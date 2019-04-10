//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

#define COMPARE(x,y)((x)<(y)?(x):(y))

int Compare(int x, int y){
    return x < y ? x : y;
}

void test01(){
    int a = 1;
    int b = 3;

    cout << Compare(++a,b) << endl;     //2        什么奇怪的东西哦。。

    cout << Compare(++a,b) << endl;     //3
}

int main(){
    test01();

    return 0;
}