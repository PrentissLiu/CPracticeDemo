//
// Created by Prentiss on 2019-04-11.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Test1{
    int operator()(int val){
        return val + 100;
    }
};

struct print1{
    void operator()(int val){
        cout << val << " ";
    }
};

void test1(){
    vector<int> v;
    for(int i = 0; i < 10;i++){
        v.push_back( i+1 );
    }

    //目标容器
    vector<int> vTarget;
    //给v开辟空间
    vTarget.resize(v.size());
    vector<int>::iterator it = transform(v.begin(),v.end(),vTarget.begin(),Test1());
    //第一个参数vSource开始，vSource结束，v目标开始，哪个struct
    //打印
    for_each(vTarget.begin(),vTarget.end(),print1());
    cout << endl;
}


//容器一和容器二中的元素放到第三个容器中
struct Test2{
    int operator()(int v1,int v2){
        return v1 + v2;
    }
};

void test2(){
    vector<int> vSource1;
    vector<int> vSource2;
    for(int i = 0; i < 10; i++){
        vSource1.push_back(i+1);
    }

    //目标容器
    vector<int> vTarget;
    //给vTarget开辟空间
    vTarget.resize(vSource1.size());
    transform(vSource1.begin(),vSource1.end(),vSource2.begin(),vTarget.begin(),Test2());

    //打印
    for_each(vTarget.begin(),vTarget.end(),print1());
    cout << endl;


}



int main(){
    test2();


    return 0;


}