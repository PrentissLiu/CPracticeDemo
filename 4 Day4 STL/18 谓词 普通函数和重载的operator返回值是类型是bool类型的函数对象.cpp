//
// Created by Prentiss on 2019-04-11.
//


//谓词普通函数或重载的operator() 返回值是bool类型的函数对象
//operator接受一个参数，一元谓词；接受两个参数，叫做二元谓词

#include <iostream>
#include <vector>
using namespace std;

class GreaterThenFive{
public:
    bool operator()(int num){
        return num > 5;
    }
};


void test1(){
    vector<int>v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterThenFive());
    if(it == v.end()){
        cout << "没有找到" << endl;
    }else{
        cout << "找到了" << endl;
    }

}


class MyCompare{
public:
    bool operator()(int num1, int num2){
        return num1 > num2;
    }
};


void test2(){
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(90);
    v.push_back(60);


    sort(v.begin(),v.end());
    for(vector<int>::iterator it = v.begin();it != v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "---------" << endl;

    //使用函数对象改变算法策略，从小到大排序
    sort(v.begin(),v.end(),MyCompare());
    for(vector<int>::iterator it = v.begin();it != v.end();it++){
        cout << *it << " ";
    }

    cout << endl;

}


int main(){
    test2();



    return 0;
}