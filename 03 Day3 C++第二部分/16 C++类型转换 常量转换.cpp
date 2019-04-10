//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;


//常量指针const的指针 转换成非常量的指针
void test01(){
    const int* p = NULL;
    int* np = const_cast<int*>(p);

    int* pp = NULL;
    const int* npp = const_cast<const int*>(pp);

    const int a = 10;
    //nt b = const_cast<int>(a); 对于非指针不能转换
}


//常量引用转换成非常量引用
void test02(){
    int num = 10;
    int & refNum = num;     //这里就非常量引用转换成常量引用油转换回去了

    const int& refNum2 = const_cast<const int&>(refNum);
}