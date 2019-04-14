//
// Created by Prentiss on 2019-04-14.
//

#include <iostream>
#include <string>
using namespace std;

void test(){
    string s = "hello";
    for(auto &i:s)              //i是引用值
        i = toupper(i);         //改变成大写

    cout << s << endl;
}
//auto 声明自动变量，是存储类型标识符，表明变量具有本地范围
//for循环体内的变量声明默认是auto存储类型，
//auto变量在离开作用域的时候会自动释放，不会发生内存溢出


int main(){

    test();

    return 0;
}