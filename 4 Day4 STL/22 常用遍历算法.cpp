//
// Created by Prentiss on 2019-04-11.
//
#include <iostream>
#include <algorithm>        //STL文头文件最大的一
#include <numeric>          //体积很小，只包括几个序列容器上的简单运算的模版函数
#include <functional>       //定义了一些模版类，还有声明函数对象
#include <vector>

using namespace std;




// for_each(iterator beg,iterator end,_callback);
//  @param beg 开始迭代器
//  @param end 结束迭代器
//  @param _callback 函数回调或者函数对象
//  @return 函数对象




//transform(iterator beg1,iterator end1,iterator beg2,_callback);
//    beg1 源容器开始迭代器
//    end1 源容器开始迭代器
//    beg2 目标容器开始迭代器


//普通函数
void print1(int val){
    cout << val << " ";
}

//函数对象
struct print01{
    void operator()(int val){
        cout << val << " ";
    }
};

void test1(){
    vector<int>v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    //遍历算法
    for_each(v.begin(),v.end(),print1);     //第三个参数是调用的普通函数的
    cout << endl;


    for_each(v.begin(),v.end(),print01());  //对于函数对象的就需要加括号了
}


struct print02{
    print02(){
        mCount = 0;
    }


    void operator()(int val){
        cout << val << " ";
        mCount++;
    }

    int mCount;
};

//for_each的返回值喔～
void test2(){
    vector<int> v;
    for(int i = 0; i < 10;i++){
        v.push_back(i);
    }

    print02 p = for_each(v.begin(),v.end(),print02());
    cout << endl;
    cout << p.mCount << endl;           //数量
}




struct print3:public binary_function<int,int,void>{
    void operator()(int val,int bindParam)const{
        cout << val + bindParam << " ";
    }
};

void test3(){
    vector<int> v;
    for(int i = 0;i < 3; i++)
        v.push_back(i);

    for_each(v.begin(),v.end(),bind2nd(print3(),100));      //绑定到一个对象（而不是普通函数的时候需要print3()后面有括号）

}



int main(){
    test3();


    return 0;
}
