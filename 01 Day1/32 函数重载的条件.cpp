//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

namespace A{
    void myFunc(){  cout << "no" << endl; }
    void myFunc(int a){  cout << "a:" << a << endl;}
    void myFunc(string b){  cout << "a:" << b << endl;}
    void myFunc(int a,string b){  cout << "int a, string b:" << a << b <<endl;}
    void myFunc(string b, int a){  cout << "string b, int a:" << b << a << endl;}


}



void myFunc(string b){
    cout << "哈哈哈哈我要打印了！" << b << endl;
    //同名的myFunc()在命名空间有好多不一样的函数啊，不过根据函数的参数是可以分辨出来的
    //因此是可以使用函数重载的（不是前面理解的随便找一个函数匹配...)
    //重载是为了解决同名函数的问题，在namespace中都写下来
}


int main(){
    myFunc("Hello");
    myFunc("hey");
    return 0;

}