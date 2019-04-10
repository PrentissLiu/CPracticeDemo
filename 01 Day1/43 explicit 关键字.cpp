//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class MyString{
public:
    explicit MyString(int n){
        //explicit 是修饰构造函数，防止隐藏式转换
        cout << "MyString(int n)" << endl;
    }

    MyString(const char* str){
        cout << "MyString(const char* str)" << endl;
    }
};


int main(){
    //不清楚是给字符串赋值还是初始化 不行
    //MyString str1 = 1;        //编译器过不了
    MyString str2(10);



    //这就很明确，字符串赋值
    MyString str3 = "abcd Hello World";
    MyString str4 = ("ancd Haaaahahahh");

    return EXIT_SUCCESS;
}