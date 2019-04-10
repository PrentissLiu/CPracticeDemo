//
// Created by Prentiss on 2019-04-08.
//

//这个到现在我还是没有编译过去，实在是不知道是什么情况辽
#include <iostream>
using namespace std;

class Base{
public:
    static int getNum(){
        return sNum;
    }

    static int getNum(int param){
        return sNum + param;
    }


public:
    static int sNum;
};

class Derived:public Base{
public:
    static int sNum;

    //重新定义一个函数，基类中重载的函数将要被隐藏
    static int getNum(int param1,int param2){
        return sNum + param1 + param2;
    }




};

int main(){
    //int Derived::sNum = 20;
    Derived derived;
    derived.getNum(2,3);


    return 0;
}