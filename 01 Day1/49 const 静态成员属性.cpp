//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{

public:
    const static int mShare = 10;
    //定义静态const数据成员的时候，最好在类内部初始化
    //如果想要实现共享，但是又想实现不可改变，那就是用const静态成员变量
};


int main(){
    cout << Person::mShare << endl;

    return EXIT_SUCCESS;
}