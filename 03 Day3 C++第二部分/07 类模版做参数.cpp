//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

//类模版
template<class NameType,class AgeType>
class Person{
public:
    Person(NameType name, AgeType age){
        this->mName = name;
        this->mAge = age;
    }

    void PrintPerson(){
        cout << this-> mName << this->mAge << endl;
    }

public:
    string mName;
    int mAge;
};

//类模版做函数的参数
void DoBussiness(Person<string,int>& p){
    p.mAge += 20;
    p.mName += "vip";
    p.PrintPerson();
}


int main(){
    Person<string,int>p("Tom",35);
    DoBussiness(p);


    return 0;

}