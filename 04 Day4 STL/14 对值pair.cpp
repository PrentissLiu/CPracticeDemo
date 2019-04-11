//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <string>
using namespace std;

void test1() {
//第一种方法创造一个对组
    pair<string, int> pair1(string("name"), 20);
    cout << pair1.first << endl;        //访问第一个值
    cout << pair1.second << endl;       //访问第二个值
}



//第二种方法
void test2(){
    pair<string,int>pair2 = make_pair("name",30);
    cout << pair2.first << endl;
    cout << pair2.second << endl;


    //利用pair赋值
    pair<string,int>pair3 = pair2;
    cout << pair3.first << endl;
    cout << pair3.second << endl;



}

int main(){
    test2();
    test1();


    return 0;
}