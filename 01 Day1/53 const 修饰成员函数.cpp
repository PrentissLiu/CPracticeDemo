//
// Created by Prentiss on 2019-04-07.
//



//const修饰成员函数的时候，const修饰this指针指向的内存区域

#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        this->mAge = 0;
        this->mID = 0;

    }

    //在括号后面添加const，除了mutable变量之外都不可以修改
    void someOperate() const{
        this-> mID = 10;
    }


    void showPerson(){
        cout << "ID" << mID << "mAge" << mAge << endl;
    }



private:
    int mAge;
    mutable int mID;
};


int main(){
    Person person;
    person.someOperate();
    person.showPerson();


    return EXIT_SUCCESS;
}