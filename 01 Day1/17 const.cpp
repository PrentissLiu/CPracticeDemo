//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;


void test(){
    const int a = 10;
    //a = 20;
    //error: cannot assign to variable 'a' with const-qualified type 'const int'
    //哈哈哈哈哈const是不可以修改的！
    cout << a << endl;

}


//C++的const不必创建内存空间；C中一个const总是需要一快内存空间的
//C++中const仅仅是用名字用一个值代替，就像#define一样，那么这个时候存储空间不必创建
//如果const地址定义为extern，则一定会为之创建内存空间



//C 全局const会被存储到只读数据段
//C++ 当声明extern或者对数据取地址的时候，编译器才会分配存储地址
// 相同点是都不可修改

int main(){
    test();

    return 0;
}