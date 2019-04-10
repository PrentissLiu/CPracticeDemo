//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

int& test01(){
    //视频上说局部变量的引用不可以反悔，但是编译确实可以返回啊！在main()函数那里可以收到值
    int a = 10; //局部变量
    return a;
}


int& test02(){
    static int a = 20;
    cout <<"static int a: " << a <<endl;

}


int main(){
    int& ret = test01();
    cout << ret << endl;


    //如果函数做左值，必须返回引用
    //这是啥意思听不懂诶！！
    test02();
    test02() = 100;
    test02();

    return 0;
}