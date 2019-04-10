//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{
public:

    //普通成员函数可以访问static和non-static成员的属性
    void changeParam1(int param){
        mParam  = param;
        sNum = param;
    }


    static void changeParam2(int param){
    //静态成员函数只能访问static成员属性
        sNum = param;
    }



private:
    static void changeParam3(int param){
        sNum = param;
    }





public:
    int mParam;
    static int sNum;//这样就可以被静态成员函数访问了！必须要static才可以

};


int Person::sNum = 0;

int main(){

    //1.通过类名调用
    Person::changeParam2(100);


    //2.通过对象调用
    Person p;
    p.changeParam2(200);


    //3.静态成员函数也有访问权限，类外没有办法访问私有静态成员函数






    return 0;
}
