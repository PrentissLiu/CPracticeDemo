//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

namespace A{
    int p1 = 20;
    int p2 = 30;
    void funcA(){
        cout <<"HelloWorld" << endl;
    }

    void funcB(){
        cout <<"Miaohuuhuhu" <<endl;
    }
}


void test(){
    //1.通过命名空间域运算符
    cout << A::p1 <<endl;   //原来这样就可以输出流 好神奇！
    A::funcA();
}



void byUsing(){
    //2.通过using声明把命名空间那些东西拽过来啦！想用什么用什么 ！！美滋滋
    using A::p1;
    using A::funcA;
    cout << p1 <<endl;
    //但是要注意重名的问题
}





int main(){
    test();
    cout<<"----------" <<endl;
    byUsing();
    return 0;
}