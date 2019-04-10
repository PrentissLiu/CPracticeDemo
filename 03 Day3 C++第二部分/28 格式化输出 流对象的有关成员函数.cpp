//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
#include <iomanip>      //使用控制符
using namespace std;


//通过流成员函数的处理
void test1(){
    int number = 10;
    cout.width(5);                  //字符串的宽度是4，不足的会用空格不足
    cout.fill('*');                 //不足的地方用*号补全
    cout.setf(ios::left);           //左对齐（那么右面的部分就用*号补全了
    cout.unsetf(ios::dec);          //卸载十进制
    cout.setf(ios::hex);            //16进制
    cout.setf(ios::showbase);       //强制输出整数的基数（0打头，16进制的0x打头
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);            //设置数值的基数为8



    cout << number << endl;
}

//使用控制符
void test2(){
    int number = 90;
    cout << setw(20) << setfill('*') << number
    << setiosflags(ios::left)

    << hex
    << setiosflags(ios::showbase)
    << endl;


}



int main(){
    test2();


    return 0;
}