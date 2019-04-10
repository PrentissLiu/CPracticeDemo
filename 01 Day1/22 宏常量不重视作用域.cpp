//
// Created by Prentiss on 2019-04-06.
//

///???喵

#include <iostream>
using namespace std;

void func1(){
    const int a = 10;
//#define hhh 20;
}

//一般来讲，宏文件从头到尾（到#undef都是有效的）

void func2(){
#define hhh 20;
    cout << hhh << endl;
    //??? << 怎么会出现语法错误？？？
}

int main(){
    func2();

    return 0;
}

#undef hhh