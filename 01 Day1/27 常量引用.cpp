//
// Created by Prentiss on 2019-04-06.
//
//常量引用的好处是 复制构造函数的时候不会产生新的变量，也不会改变值
#include <iostream>
using namespace std;

void test01(){
    int a = 100;
    const int& aRef = a;

    //aRef = 200;
    //error: cannot assign to variable 'aRef' with const-qualified type 'const int &'
    //同样是不能修改值的

    cout << a << endl;
    cout << aRef << endl;

}


void ShowValue(const int& param){
    cout << param << endl;
    //防止函数中意外修改数据，就很棒
}

int main(){
    test01();

    int a = 1;
    ShowValue(a);



    return 0;
}