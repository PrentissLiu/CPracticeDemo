//
// Created by Prentiss on 2019-04-08.
//
#include <iostream>
using namespace std;

//运行不起来还不知道是什么问题 Do那个函数没有办法调用

class Caculator{
public:
    void setA(int a){
        this->mA = a;
    }
    void setB(int b){
        this->mB = b;
    }
    void setOperator(string oper){
        this->mOperator = oper;
    }

    int getResult(){
        if(this-> mOperator == "+")
            return mA+mB;

        if(this-> mOperator == "-")
            return mA-mB;
        if(this-> mOperator == "*")
            return mA*mB;
        if(this-> mOperator == "/")
            return mA/mB;
    }




public:
    int mA;
    int mB;
    string mOperator;
};


class AbstractCaculator{
public:
    void setA(int a){
        this->mA = a;
    }

    void setB(int b){
        this->mB = b;
    }

    virtual int getResult() = 0;

protected:
    int mA;
    int mB;

};

class PlusCaculator:public AbstractCaculator{
public:
    virtual int getResult(){
        return mA + mB;
    }
};


class MinusCaculator:public AbstractCaculator{
public:
    virtual int getResult(){
        return mA - mB;
    }
};


class MultipliesCaculator:public AbstractCaculator{
public:
    virtual int getResult(){
        return mA * mB;
    }
};

void Do(AbstractCaculator* caculator){
    int a = 10;
    int b = 13;

    caculator -> setA(a);
    caculator -> setB(b);

    cout << caculator-> getResult() << endl;
    delete caculator;       //最后还把这个对象删掉辽
}



int main(){

    Caculator caculator;

    Do(caculator);

    return EXIT_SUCCESS;
}