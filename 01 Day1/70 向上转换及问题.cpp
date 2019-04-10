//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class Animal{
public:
    virtual void speak(){               //这里我们也加了virtual
        cout << "动物在唱歌" << endl;
    }
};


class Dog:public Animal{
public:
    virtual void speak(){               //这里我们加了virtual
        cout << "狗狗在唱歌" << endl;
    }
};

void Do(Animal& animal){
    animal.speak();
}


void test(){
    Dog dog;
    Do(dog);
}


int main(){
    test();

    return 0;

    //动物在唱歌
    //应该输出狗狗在唱歌呀，这怎么弄？需要绑定



    //C++中的动态绑定对virtual起作用
}


//迟绑定（动态绑定）：运行的时候绑定
//现在是过早绑定的原因引起的，编译是根据指向对象的指针或者引用的类型选择函数调用


//总结：函数声明的前面加上virtual，创建需要动态绑定的虚成员函数
//     在派生类中的virtual函数被定义为override重写
//     virtual关键字只能修饰成员函数
//     构造函数不能是虚函数