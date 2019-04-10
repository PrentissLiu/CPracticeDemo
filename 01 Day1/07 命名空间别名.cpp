//
// Created by Prentiss on 2019-04-06.
//

#include<iostream>
using namespace std;

namespace firstName{
    int a = 10;
    void func(){cout << "HelloWorld" << endl;}
}

void test(){
    namespace secondName = firstName;
    cout << "secondName::a" << secondName::a <<endl;
}

int main(){
    test();
    return 0;
}