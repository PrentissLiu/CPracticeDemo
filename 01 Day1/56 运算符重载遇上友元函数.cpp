//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream& os, Person& person);
    //把"<<" 操作符重载
    //这里是友元函数

public:
    Person(int id, int age){
        mID = id;
        mAge = age;
    }

private:
    int mID;
    int mAge;
};


//定义重载操作符
//后面的这个参数是替换的对象
//前面这个参数是重载操作符的名称
ostream& operator<<(ostream& os, Person& person){
    os << "ID:" << person.mID << "Age:" << person.mAge;
    return os;

}


int main(){
    Person person(100,39);
    cout<< person <<endl;

    return 0;
}