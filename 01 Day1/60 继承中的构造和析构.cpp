//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "A类 构造函数" << endl;
    }

    ~A(){
        cout << "A类 析构函数" << endl;
    }
};


class B:public A{
public:     //视频上没有，但是编译的时候告诉我B的构造器是私有的，因此需要加上public

    B(){
        cout << "B类 构造函数" << endl;
    }

    ~B(){
        cout << "B类 析构函数" << endl;
    }
};
#if 1
class C:public B{
public:
    C(){
        cout << "C类 构造函数" << endl;
    }

    ~C(){
        cout << "C类 析构函数" << endl;
    }
};

#endif
void test(){
    //A a;
    //B b;
    C c;
}

int main(){
    test();


    return 0;
}


//A类 构造函数
//B类 构造函数
//C类 构造函数
//C类 析构函数
//B类 析构函数
//A类 析构函数

//总结：构造函数访问的时候是从父类依次到子类；析构函数分别是从子类到父类
// 父类->对象成员->子类