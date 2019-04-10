//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Person{
public:

#if 0 // 这样可以选择性编译诶

    //传统方式初始化
    Person(int a,int b, int c){
    mA = a;
    mB = b;
    mC = c;
}

#endif

    //初始化列表的简单使用
    Person(int a, int b, int c):mA(a),mB(b),mC(c){}

    void printValue(){
        cout << mA << mB << mC << endl;
    }





private:
    int mA;
    int mB;
    int mC;
};





void test(){
    Person p(1,2,3);
    p.printValue();

}

int main(){
    test();

    return 0;
}