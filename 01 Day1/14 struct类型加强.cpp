//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

struct Student{
    string mName;
    int mAge;
    void setName(string name){mName = name;}
    void setAge(int age){mAge = age;}
    void showStudent(){
        cout << "Name:" << mName <<" Age:" << mAge << endl;
        cout << "呜哈哈哈哈哈哈" << endl;

    //1.C的结构体中~可以定义成员变量
    //  C++的结构体中可以定义成员函数，也可以定义成员变量～好玩！
    }
};


void test01(){
    Student student;
    student.setName("TongTong");
    student.setAge(8);
    student.showStudent();
    //2.C++中定义结构体变量不需要添加struct关键字
    //  C  中定义结构体变量就需要添加struct关键字辽
}

int main(){
    test01();
}