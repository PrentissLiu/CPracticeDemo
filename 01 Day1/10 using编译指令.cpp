//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;
namespace A{
    int p1 = 20;
    int p2 = 30;
    void funcA(){ cout <<"funcA" <<endl;}
    void funcB(){ cout <<"funcB" <<endl;}
}

void test01(){
    using namespace A;
    cout << p1 << endl;
    cout << p2 << endl;
    funcA();
    funcB();


    //这时候不会产生二义性，编译器知道后面的p1是新定义的p1
    int p1 = 30;
    cout << p1 << endl;
}


namespace B{
    int p1 = 20;
    int p2 = 30;
    void funcA(){   cout << "Hello funcA"<<endl; }
    void funcB(){   cout << "Hello funcB"<<endl; }
}

void test02(){
    using namespace A;
    using namespace B;

    //candidate found by name lookup is 'A::p1'
    //二义性产生，这时候就尴尬了，不知道用的哪个命名空间的p1
    //cout << p1 << endl;
}


int main(){
    test01();
    test01();

    return 0;
}