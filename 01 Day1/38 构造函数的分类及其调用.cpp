//
// Created by Prentiss on 2019-04-07.
//



//有参构造函数、无参构造函数
//普通构造函数、拷贝构造函数

#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "没有参数的构造函数" << endl;
        mAge = 0;
    }


    Person(int age){
        cout << "有参数的构造函数" << endl;
        mAge = age;
    }


    Person(const Person& person){       //当然构造函数在写的时候就是拷贝的一副模样
        cout <<"拷贝构造函数 使用另一个对象初始化本对象" << endl;
        mAge = person.mAge; //说明是另外的一个对象的
    }

    void PrintPersonAge(){              //注意这是一个方法，丢失括号就成了构造函数了（当然还需要名字和类名一样）
        cout << "年龄是" << mAge << endl;

    };


private:
    int mAge;


};



void test01(){
    //1.没有参数的构造函数
    Person person1;
    person1.PrintPersonAge();

}



void test02(){
    //2.第一种方法：括号法
    Person person2(5);
    person2.PrintPersonAge();



    //3.这是和上面结合的拷贝构造函数，把person2对象 作为参数拷贝了一个person3
    Person person3(person2);
    person2.PrintPersonAge();




    //4.第二种 匿名对象，没有名字的对象
    Person (200);

    Person person03 = Person(300);
    person03.PrintPersonAge();



    //5.第三种 =法 隐式转换
    Person person04 = 150;  //也相当于给参数
    person04.PrintPersonAge();
}

int main(){
    test02();

    return 0;
}