//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

const short param = 128;

void func(short a){
    cout << "short" << endl;
    cout << param << endl;

}


//尽量用const替换#define
//1.const有类型，可以进行编译器类型安全检查
//2.const有作用域，

int main(){
    func(1);//要求有一个参数就是要给一个参数哦！

    return 0;
}