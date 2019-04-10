
//
// Created by Prentiss on 2019-04-09.
//

#ifndef C_LANGUAGEFATHERC_12_类模版头文件和源文件分离_H
#define C_LANGUAGEFATHERC_12_类模版头文件和源文件分离_H

#endif //C_LANGUAGEFATHERC_12_类模版头文件和源文件分离_H


#pragma once

#include <iostream>
using namespace std;


template <class T1,class T2>
class Person{
public:
    Person(T1 name,T2 age);
    void ShowPerson();

public:
    T1 mName;
    T2 mAge;
};


template <class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age) {
    this->mName = name;
    this->mAge = age;
}


template<class T1,class T2>
void Person<T1,T2>::ShowPerson(){
    cout << this->mName << this->mAge << endl;
}