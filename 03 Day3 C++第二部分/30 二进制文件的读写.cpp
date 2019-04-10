//
// Created by Prentiss on 2019-04-09.
//

//这个程序并不是很懂QwQ 哭


#include <iostream>
#include <fstream>

using namespace std;

class Person{
public:
    Person(char* name,int age){
        strcpy(this->mName,name);
        this->mAge = age;

    }

public:
    char mName[64];
    int mAge;
};


int main(){

    char* fileName = "./30_person.txt";
    ofstream osm(fileName, ios::out | ios::binary);

    Person p1("John",22);
    Person p2("Tom",11);


    osm.write((const char*)&p1, sizeof(Person));
    osm.write((const char*)&p2, sizeof(Person));


    osm.close();


    ifstream is(fileName,ios::in | ios::binary);
    if(!ism){           //(!ism) 是啥
        cout << "打开失败" << endl;
    }


    Person p3;
    Person p4;

    ism.read((char*)&p3, sizeof(Person));
    ism.read((char*)&p4, sizeof(Person));


    cout << p3.mName << p3.mAge << endl;
    cout << p4.mName << p4.mAge << endl;

    ism.close();


    return  EXIT_SUCCESS;



}