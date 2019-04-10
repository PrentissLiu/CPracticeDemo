//
// Created by Prentiss on 2019-04-07.
//

//这个完全不知道哪里出现的bug 根本不能通过
//常对象只能调用const成员函数
//常对象可以访问const或非const数据成员，不能修改，除非成员用mutable修饰


#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        this-> mAge = 0;
        this-> mID  = 0;
    }


    //const成员函数
    void changePerson()const{
        mAge = 100;
        mID = 1000;
    }


    void ShowPerson(){
        this -> mAge = 1001;
        cout << "ID---" << this -> mID << "Age---" << this -> mAge << endl;

    }

private:
    int mAge;
    int mID;
};


void test(){
    const Person person;
    //常对象只能调用const成员函数

    cout << "Age--" << person.mAge << endl;
}


int main(){
    test();
}