//
// Created by Prentiss on 2019-04-07.
//


#include <iostream>
using namespace std;

class Person{
public:
    //0.当形式参数和成员变量名一样的时候，可以用this区分
    Person(string name, int age){
        this->name = name;  //当前对象的name = 形式参数name
        this->age = age;
    }

    //1.返回对象本身的引用
    //  利用成员函数操作
    Person PersonPlusPerson(Person& person){
        string newname = this-> name + person.name;
        int newage = this-> age + person.age;
        Person newperson(newname, newage);
        return newperson;
    }

    void ShowPerson(){
        cout << "Name---" << name << "Age---" << age << endl;
    }


public:
    string name;
    int age;
};



//3.成员函数和全局函数（两个Person对象相加）
Person PersonPlusPerson(Person& p1,Person& p2){
    string newname = p1.name + p2.name;
    int newage = p1.age + p2.age;
    Person newperson(newname,newage);
    return newperson;
}



int main(){
    Person person("John",100);
    person.ShowPerson();

    Person p1("John",10);
    Person p2("Tom",12);


    //1.利用全局函数实现两个对象相加
    Person p3 = PersonPlusPerson(p1,p2);
    p1.ShowPerson();
    p2.ShowPerson();
    p3.ShowPerson();

    cout << "-----" << endl;



    //2.利用成员函数两个对象相加
    Person p4 =p1.PersonPlusPerson(p2);
    p4.ShowPerson();





    return 0;
}