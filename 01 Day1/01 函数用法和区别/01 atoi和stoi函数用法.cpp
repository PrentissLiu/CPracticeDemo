//
// Created by Prentiss on 2019-04-15.
//

#include <iostream>
#include <set>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s1 = "213589485934",s2 = "-3242424";
    string s3 = "3423432424225",s4 = "-2342423423423423";

    cout << stoi(s1) << endl;

    cout << stoi(s2) << endl;

    cout << atoi(s3.c_str()) << endl;       //c_str() 返回一个指向正规C字符串的指针常量
    cout << atoi(s4.c_str()) << endl;


    //atoi 不会做范围检查如果超出范围输出上界，如果超出下界 就输出下届
    //stoi 会作出范围检查，如果超出界限会有提示

    //头文件都是#include <csting>

    return 0;

}