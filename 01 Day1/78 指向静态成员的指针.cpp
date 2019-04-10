//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;


class A{
public:
    static void dis(){
        cout << data << endl;
    }

    static int data;    //静态成员函数
};


int A::data = 100;

void test(){
    int *p = &A::data;

    cout << *p << endl;


    void(*pfunc)() = &A::dis;       //通过类来访问的指针
    pfunc();
}

int main(){
    test();

    return 0;
}