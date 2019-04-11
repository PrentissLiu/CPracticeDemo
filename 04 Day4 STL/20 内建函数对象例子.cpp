//
// Created by Prentiss on 2019-04-11.
//


#include <iostream>
#include <functional>       //内建函数对象需要的
#include <vector>
using namespace std;

void test(){
    negate<int>n;           //正的变成负的
    cout << n(50) << endl;

}


void test2(){
    plus<int>p;

    cout << p(10,20) << endl;
}


//大于的仿函数
void test3(){
    vector<int>v;
    srand((unsigned int)time(NULL));
    for(int i = 0;i < 10; i++)
        v.push_back(rand() % 100);
    for(vector<int>::iterator it= v.end();it != v.begin();it--)
        cout <<*it << " ";

    cout << endl;
    sort(v.begin(),v.end(),greater<int>());     //重新排序

    for(vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

}





int main(){
    test3();


    return 0;
}