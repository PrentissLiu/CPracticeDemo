//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "No param constructor " << endl;
        mAge = 10;

    }

    Person(int mAge){
        cout << " param constructor" << endl;
        mAge = mAge;
    }

    Person(const Person& person){
        cout << "copy constructor" << endl;
        mAge = person.mAge;
    }


    ~Person(){
        cout << "destructor" << endl;
    }

private:
    int mAge;
};



void test1(){
//1.旧对象初始化新的对象
    Person p(1);
    Person p1(p);           //拷贝
    Person p2 = Person(p);  //同样是拷贝
    Person p3 = p;          //还是拷贝

}





//2.传递的参数是普通对象，函数的参数也是普通对象，传递会调用拷贝构造
void doBussiness(Person p){}
void test2(){
    Person p(10);
    doBussiness(p);

}



//3.vs release下没有调用拷贝构造函数
//  clion下调用拷贝构造函数
Person MyBusiness(){
    Person p(10);
    cout << "局部的p" << (int *)&p << endl;
    return p;
}
void test3(){
    Person p = MyBusiness();
    cout << "局部的p test" << (int *)&p << endl;

}



int main(){
    test3();

    return 0;
}