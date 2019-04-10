//
// Created by Prentiss on 2019-04-06.
//

#include<iostream>
using namespace std;

class A{
    int mAge;
};

struct B{
    int mAge;

};

void test(){
    A a;
    B b;
    //a.mAge;
    //cout << a.mAge << endl;
    //error: 'mAge' is a private member of 'A'
    //无法访问私有成员，class的默认全显示private


    b.mAge;
    cout << b.mAge << endl;


}

int main(){
    test();
}