//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

template<class NameType,class AgeType>
class Person{
public:
    Person(NameType name,AgeType age){
        this ->mName = name;
        this ->mAge  = age;
    }

    //我们可以看到类模版内的方法可以在里面实现
    void showPerson(){
        cout << this->mName << this-> mAge << endl;
    }

public:
    NameType mName;
    AgeType mAge;
};


void test1(){
    //Person P1("长城",11);               //类模版不能自动进行推导  需要告诉他你需要什么参数
    Person<string,int>P1("长城",123);
    P1.showPerson();



}

int main(){
    test1();

    return 0;
}