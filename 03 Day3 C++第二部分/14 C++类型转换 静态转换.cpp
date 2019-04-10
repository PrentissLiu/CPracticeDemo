//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;


class Animal{};
class Dog:public Animal{};
class Other{};


//基础数据类型转换
void test01(){
    char a = 'a';
    double b = static_cast<double>(a);
}



//继承关系指针相互转换
void test02(){
    //继承关系指针转换
    Animal* animal01 = NULL;
    Dog* dog01 = NULL;
    //子类指针转换成为父类指针，安全
    Animal* animal02 = static_cast<Animal*>(dog01);
    //父类指针转换成子类指针，不安全
    Dog* dog02 = static_cast<Dog*>(animal01);
}


//继承关系引用转换
void test03(){
    Animal ani_ref;
    Dog dog_ref;


    //继承关系指针转换（类似复制一个指针）
    Animal& animal01 = ani_ref;
    Dog& dog01 = dog_ref;

    //子类指针换成父类指针，安全
    Animal& animal02 = static_cast<Animal&>(dog01);

    //父类指针换成子类，不安全
    Dog& dog02 = static_cast<Dog&>(animal01);
}


void test04(){
    Animal* animal01 = NULL;
    Other* other01 = NULL;

}

int main(){

    cout << "f" << endl;
    return 0;
}