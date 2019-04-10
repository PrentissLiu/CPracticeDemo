//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{
public:
    Person(char* name, int age){
        pName = (char*)malloc(strlen(name) + 1);       //要多一个字节放'\0'
        strcpy(pName,name);
        mAge = age;
    }


    //增加拷贝构造函数
    Person(const Person& person){
        pName = (char *)malloc(strlen(pName) + 1);
        strcpy(pName, person.pName);
        mAge = person.mAge;
    }

    ~Person(){
        if(pName != NULL){
            free(pName);
        }
    }


private:
    char* pName;
    int mAge;
};




void test(){
    Person p1("TongTong",8);    //运用p1对象初始化对象p2，用默认的构造函数
    Person p2 = p1;
}

int main(){
    test();

    return 0;
}