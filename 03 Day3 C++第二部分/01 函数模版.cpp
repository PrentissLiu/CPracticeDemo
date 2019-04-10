//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;


void swapInt(int& a,int& b){
    int temp = a;
    a = b;
    b =temp;
}


void swapChar(char& a,char& b){
    char temp = a;
    a = b;
    b = temp;
}


//思考如果要交换double类型的数据，就需要写double类型交换的函数
//要是可以把类型作为参数写进来就好了


template<class T>
void mySwap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}


void test(){
    int a = 10;
    int b = 20;
    cout << a << "   " << b << endl;            //一个新发现：单引号会出现很奇怪的数字哦。。



    char c1 = 'a';
    char c2 = 'b';
    //函数模版可以自动推导参数的类型
    //也可以显式指定一种类型
    mySwap<char>(c1,c2);
    cout << c1 << "    " << c2 << endl;


}


int main(){
    test();

    return 0;
}