//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

class MyOutOfRange:public exception{
public:
    MyOutOfRange(const string errorInfo){
        this -> m_Error = errorInfo;
    }

    MyOutOfRange(const char* errorInfo){
        this -> m_Error = string(errorInfo);
    }

    virtual const char* what() _NOEXCEPT{
        //哇这个异常有意思，这里必须要_NOEXCEPT才可以诶，神奇！
        return this->m_Error.c_str();
    }

    string m_Error;


public:
    //string m_Error;
};

class Person{
public:
    Person(int age){
        if(age <= 0 || age > 150){
            throw MyOutOfRange("我的异常 年龄要在0-150之间");
        } else
            this -> m_Age = age;
    }

public:
    int m_Age;
};

void test(){
    try{
        Person p(1333);
    }

    catch(out_of_range& e){
        cout << e.what() << endl;
    }

    catch(length_error& e){
        cout << e.what() << endl;
    }

    catch(MyOutOfRange& e){
        cout << e.what() << endl;
    }
}

int main(){
    test();

    return 0;
}