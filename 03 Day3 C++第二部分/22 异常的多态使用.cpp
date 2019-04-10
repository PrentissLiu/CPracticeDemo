//
// Created by Prentiss on 2019-04-09.
//

//多态是扩展性很好
//1继承关系 2方法重写 3父类接口引用指向子类

#include <iostream>
using namespace std;

class BaseException{
public:
    virtual void printError(){};
};


class NullPointerException:public BaseException{
public:
    virtual void printError(){
        cout << "空指针异常" << endl;
    }
};


class OutOfRangeException:public BaseException{
public:
    virtual void printError(){
        cout << "越界异常" << endl;
    }
};



//原来抛出异常还能抛出一个类中的方法啊！！神奇
void doWork(){
    throw NullPointerException();
}

void test(){
    try{
        doWork();
    }

    catch(BaseException& ex){
        ex.printError();
    }
}


int main(){
    test();


    return 0;
}