//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

//构造函数语法：函数名和类名相同，没有返回值，不能void，可以有参数
//析构函数语法："～"；没有返回值，不能有void，不能有参数，不能重载
//～ClassName(){}


class Person{
public:
    Person(){
        cout  << "构造函数调用" << endl;
        pName = (char *)malloc(sizeof("John!"));
        strcpy(pName,"John");
        mTall = 150;
        mMoney = 100;
    }

    ~Person(){
        cout << "析构函数调用" << endl;
        if(pName != NULL)
            free(pName);
            pName = NULL;
    }

public:
    char *pName;
    int mTall;
    int mMoney;


};


void test(){
    Person person;
    cout << person.pName << person.mTall << person.mMoney << endl;
}


int main(){
    test();

    return 0;
}
//构造函数调用
//John150100
//析构函数调用

//最先开始的是构造函数，最后要结束的时候收拾残局的是析构函数
