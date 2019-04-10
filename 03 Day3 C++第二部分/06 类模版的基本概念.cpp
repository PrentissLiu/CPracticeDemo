//
// Created by Prentiss on 2019-04-09.
//


#include <iostream>
using namespace std;


//类模版用于实现类所需要的数据的类型参数化
template<class NameType, class AgeType>
class Person{
public:
    Person(NameType name,AgeType age){
        this -> mName  = name;
        this -> mAge = age;
    }

    void showPerson(){
        cout << this-> mName << this->mAge << endl;
    }


public:
    NameType mName;
    AgeType mAge;
};


void test(){
    Person<string, int>P1("Tom",123);
    //实例化这个模版类的时候就需要注明所需要的参数
    P1.showPerson();
}


int main(){
    test();

    return 0;
}