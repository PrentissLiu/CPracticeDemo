//
// Created by Prentiss on 2019-04-07.
//

//不知道为什么一直编译不通过
//好烦哦简直受不了
//先看下一个程序吧

#include <iostream>
using namespace std;

class Car{
public:
    Car(){
        cout << "Car 默认构造参数" << endl;
        mName = "大众";
    }


    Car(string name){
        cout << "Car 带参数的构造参数" << endl;
    }

    ~Car(){
        cout << "Car 的析构函数" << endl;
    }




private:
    string mName;

};


class Tractor{
public:
    Tractor(){
        cout << "Tractor 默认构造函数" << endl;
        mName = "破拖拉机嘻嘻嘻";
    }

    Tractor(string name){
        cout << "Tractor 含参数构造函数 " << endl;
        mName = name;
    }

    ~Tractor(){
        cout << "Tractor析构函数" << endl;
    }


private:
    string mName;
};



class People{
public:
//#if 1
    People(string name){
        mName = name;
    }



//#else
    People(string carName,string tracName, string name):mTractor(tracName),mCar(carName),mName(name){
        cout << "People 构造函数" << endl;
    }



private:
    string mName;
    Car mCar;
    Tractor mTractor;


//#endif

    void GoWorkByCar(){
        cout << mName << "开着" << /*mCar.mName << */"上班" << endl;

    }

    void GoWorkByTractor(){
        cout << mName << "驾着" << /*mTractor.mName << */ "上班" << endl;
    }

    ~People(){
        cout << "People析构函数" << endl;
    }




};


void test(){
    People people("刘能");
    people.GoWorkByCar();
    people.GoWorkByTractor();
}

int main(){
    test();

    return 0;
}