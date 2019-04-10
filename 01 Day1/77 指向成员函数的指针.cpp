//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class A{
public:
    int func(int a,int b){
        return a+b;
    }
};

void test(){
    A a1;
    A* a2 = new A;

    int(A::*pFunc)(int,int) = &A::func;
    //赋值                   =&类名::非静态数据函数  //本质就是获取某个类的某个变量的地址
    //返回类型(类名::*指针名)(参数列表)          //定义格式

    cout << "(a1.*pFunc)(10,20)   --- "<<(a1.*pFunc)(10,20) << endl;
    cout << "(a2->*pFunc)(10,20)   --- "<< (a2->*pFunc)(10,20) << endl;
    //指针解引用




}

int main(){
    test();

    return 0;
}