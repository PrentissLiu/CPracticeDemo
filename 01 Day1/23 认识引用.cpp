//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

void test01(){
    int a = 10;

    //&的意思：给变量取一个别名
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    cout << "-------" << endl;




    //操作引用之后的数字果真就像操作原来的一样！
    b = 100;
    cout << b << endl;




    cout << "-------" << endl;

    //还可以起很多名称！！！棒棒！！
    int &c = a;
    cout << c << endl;




    cout << "-------" << endl;
    //取地址还都是一样的！！！
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;


}


void test02(){
    //注意事项
    //1.error: declaration of reference variable 'hey' requires an initializer
    //引用用之前需要初始化
    //int& hey;




    int a = 10;
    int b = 20;
    int &ref = a;
    //2.引用初始化之后不能改变引用，不然会出现奇怪的问题？？
    cout << a << endl;
    cout << ref << endl;
    cout << b << endl;



    //int arr[10];
    //int& ref3[10] = arr;
    //error: 'ref3' declared as array of references of type 'int &'
    //3.不能对数组进行引用




}



void test03(){

    //数组引用的方法一：叉棍缄第二个数组，对每个数组内部元素的引用
    //第二种方法什么鬼看不懂不学了qwqç
    typedef int ArrRef[10];
    int arr[10];
    ArrRef& aRef = arr;

    for(int i = 0; i < 10; i++)
        aRef[i] = i+1;
    for(int i = 0;i< 10; i++)
        cout << arr[i] << endl;
}







int main(){

    test03();



    return 0;

}