//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class AbstractDrinking{
public:
    //基类加入纯虚函数，成为了抽象类
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;


    void MakeDrink(){
        Boil();
        Brew();
        PourInCup();


    }
};


class Coffee:public AbstractDrinking{
public:
    virtual void Boil(){
        cout << "农夫山泉" << endl;
    }
    virtual void Brew(){
        cout << "冲咖啡！！！！！"<< endl;
    }
    virtual void PourInCup(){
        cout << "咖啡倒入杯中" << endl;
    }



};


class Tea:public AbstractDrinking{
public:
    virtual void Boil(){
        cout << "泡茶" << endl;
    }
    virtual void Brew(){
        cout << "泡第二步" << endl;
    }
    virtual void PourInCup(){
        cout << "泡第三步 扔到杯子里" << endl;
    }

};

void doBussiness(AbstractDrinking* drink){
    drink -> MakeDrink();
    delete drink;
}

void test(){

    doBussiness(new Coffee);

    doBussiness(new Tea);



}


int main(){
    test();


    return 0;
}


//总结：建立公共接口（在这里是基类）讲公共的操作步骤抽象出来，通过公共接口操纵组类。公共接口不需要一开始的时候就去实现
//因此公共是一个抽象的类


//纯虚函数使用virtual 后面加上= 0，这样告诉编译器这个函数所在的类不能被实例化
//继承一个抽象类的时候，必须要实现所有的虚函数，不然抽象类派生的也是一个抽象类
