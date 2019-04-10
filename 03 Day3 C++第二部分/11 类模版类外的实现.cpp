//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

#include <string>

//模版类
template<class T1,class T2>
class Person{
public:
    Person(T1 name,T2 age);
    void showPerson();

public:
    T1 mName;
    T2 mAge;
};



//在类外面实现
template <class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age) {
    this->mName = name;
    this->mAge = age;
}


template <class T1,class T2>
void Person<T1,T2>::showPerson() {
    cout << this->mName << this->mAge << endl;
}


void test(){
    Person<string,int>p("Obama",20);
    p.showPerson();
}


int main(){
    test();

    return EXIT_SUCCESS;
}