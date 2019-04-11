//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> v;
    for(int i = 0;i< 100000;i++)
        v.push_back(i);

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    //把容量设置小了之后，后面就一直是10了，没有变大诶
    v.resize(10);

    cout << v.capacity() << endl;
    cout << v.size() << endl;


    //哪怕交换了之后空间也没有变大
    vector<int>(v).swap(v);


    cout << v.capacity() << endl;
    cout << v.size() << endl;


}