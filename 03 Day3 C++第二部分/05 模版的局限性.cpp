//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

class Person{
public:
    Person(string name,int age){
        this -> mName = name;
        this -> mAge = age;
    }


public:
    string mName;
    int mAge;
};


template <class T>
void mySwap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}


//这是一类具体化的实现，具体化实现的原型和定义词以template<>开头，通过名称来指出类型
//具体化优先于常规的模版
template<>void mySwap<Person>(Person &p1,Person &p2){
    string nameTemp;
    int ageTemp;

    nameTemp = p1.mName;
    p1.mName = p2.mName;
    p2.mName = nameTemp;


    ageTemp = p1.mAge;
    p1.mAge = p2.mAge;
    p2.mAge = ageTemp;

}

void test(){
    Person P1("Tom",10);
    Person P2("Lily",12);

    cout << P1.mName << P1.mAge << endl;

    cout << P2.mName << P2.mAge << endl;
}

int main(){

    test();

    return 0;

}