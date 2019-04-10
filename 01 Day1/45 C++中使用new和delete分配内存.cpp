//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{

public:
    Person(){
        cout << "无参数构造函数" << endl;
        pName = (char*)malloc(strlen("undefined") + 1);
        strcpy(pName,"undefined");
        mAge = 0;
    }

    Person(char* name, int age){
        pName = (char*)malloc(strlen(name) + 1);
        strcpy(pName,name);
        mAge = age;
    }

    void ShowPerson(){
        cout << "Name : "  << pName << "Age :" << mAge << endl;
        if(pName != NULL)
            delete pName;
            pName = NULL;
    }




private:
    char* pName;
    int mAge;
};


void test(){
    Person* person1 = new Person;
    Person* person2 = new Person("John",8);



    person1 -> ShowPerson();
    person2 -> ShowPerson();


    delete person1;
    delete person2;
}


int main(){
    test();
}