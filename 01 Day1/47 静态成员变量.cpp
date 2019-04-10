//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

//静态成员变量必须在类中声明，在类外面定义
//静态成员变量不属于某一个对象，为对象分配的空间里面不包含静态成员的空间

class Person{
public:

    //类的静态成员属性
    static int sNum;


private:
    static int sOther;

};

//类外面初始化，初始化的时候不加static
int Person::sNum = 0;
int Person::sOther =0;

int main(){

    //1.通过类名访问
    Person::sNum = 100;
    cout << "Person::sNum " << Person::sNum <<endl;




    //2.通过对象访问
    Person p1,p2;
    p1.sNum = 200;

    cout << "p1.sNum " << p1.sNum << endl;  //200
    cout << "p2.sNUM " << p2.sNum << endl;  //100
    //说明静态成员变量就是一个，哪个对象也都用的是同一个
    //因此改了一个其实就变化了



    //3.静态成员变量也有访问权限 类外无法访问私有静态成员函数








    return 0;
}