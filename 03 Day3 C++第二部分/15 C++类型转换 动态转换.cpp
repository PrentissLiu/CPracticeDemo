//
// Created by Prentiss on 2019-04-09.
//

//ynamic_cast 主要是类层次间的上行转换和下行转换
//类层次间向上行转换的时候，dynamic_dast 和static_cast 的效果是一样的
//下行转换的时候，dynamic_cast 具有类型检查的功能，比static_cast 安全


#include <iostream>
using namespace std;

class Animal{
public:
    virtual void showName() = 0;

};



class Dog:public Animal{
    virtual void showName(){
        cout << "I am a dog." << endl;
    }
};


class Other{
public:
    void PrintSomething(){
        cout  << "Other class" << endl;
    }
};


//普通类型转换
void test01(){
    int a = 10;
    //double a = dynamic_cast<int>(a);
    //不支持基础数据类型转换
}

//继承关系指针
void test02(){
    Animal* animal100 = NULL;
    Dog* dog01 = new Dog;

    //子类指针可以转换成父类指针 可以
    Animal* animal02 = dynamic_cast<Animal*>(dog01);
    animal02 ->showName();

    //父类指针转换成子类指针 讲义上说不可以 但是好像也可以？编译器没有报错
    Dog* dog02 = dynamic_cast<Dog*>(animal100);
}


//继承关系引用
void test03(){
    Dog dog_ref;
    Dog& dog01 = dog_ref;

    //子类引用转换成父类引用 可以
    Animal& animal02 = dynamic_cast<Animal&>(dog01);
    animal02.showName();
}


//无继承关系指针转换
void test04(){
    Animal* animal01 = NULL;
    Other* other = NULL;

}

int main(){

    return 0;
}