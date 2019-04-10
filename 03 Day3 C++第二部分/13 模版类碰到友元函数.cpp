//
// Created by Prentiss on 2019-04-09.
//


//不知道出现了什么问题，为什么打印出来是一个负的好多的数。。。溢出了？？？？
#include <iostream>
#include <string>
using namespace std;


template <class T1,class T2> class Person;

//告诉编译器函数模版的存在
template<class T1,class T2>void PrintPerson2(Person<T1,T2>& p);


//友元函数在类内的实现
template<class T1,class T2>
class Person{

        //1- 友元函数在类内的实现
        friend void PrintPerson(Person<T1,T2>& p){
            cout << p.mName << p.mAge << endl;
        }



        //2- 友元函数在类外的实现，告诉编译器有个存在
        friend void PrintPerson2<>(Person<T1,T2>& p);



        //类模版碰到友元函数
        template<class U1,class U2>
        friend void PrintPerson(Person<U1,U2>& p);


public:
    Person(T1 name,T2 age){
        this -> mName;
        this -> mAge;
    }

    void showPerson(){
        cout << this->mName << this-> mAge << endl;
    }

private:
    T1 mName;
    T2 mAge;
};


void test01(){
    Person<string,int>p("tom",20);
    PrintPerson(p);
}



//2-友元函数在类外面的实现
template <class T1,class T2>
void PrintPerson2(Person <T1,T2>& p){
    cout << p.mName << p.mAge << endl;
}


void test02(){
    Person<string,int>p("John",22);
    PrintPerson2(p);
}


int main(){
    test01();

    return EXIT_SUCCESS;
}
