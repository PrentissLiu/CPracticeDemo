//
// Created by Prentiss on 2019-04-10.
//


//从test02开始就编译不下去了....还是先看看后面的有木有问题吧惆怅

#include <iostream>
#include <vector>       //容器
#include <algorithm>    //算法

using namespace std;

void test01(){
    vector<int> v;          //标准容器之一：动态数组
    v.push_back(1);         //vector 容器提供的插入的方法
    v.push_back(3);
    v.push_back(5);


    //迭代器
    vector<int>::iterator pStart = v.begin();
    //vector容器的begin()方法，返回指向第一个元素的迭代器
    vector<int>::iterator pEnd = v.end();
    //vector容器的end()方法，指向最后一个元素下一个未知的迭代器


    //通过迭代器遍历
    while(pStart != pEnd){
        cout << *pStart << " ";
        pStart ++;
    }
    cout << endl;


    //算法 cout，用于统计元素的个数
    int n = count(pStart,pEnd ,5);
    cout << n << endl;
}


//STL容器不止可以存储数据类型，还可以存储类对象
class Teacher{
public:
    Teacher(int age):age(age){};
    ~Teacher();

public:
    int age;
};



void test02(){

    vector<Teacher> v;              //存储Teacher类型数据的容器
    Teacher t1(10),t2(20),t3(30);
    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);

    vector<Teacher>::iterator pStart = v.begin();
    vector<Teacher>::iterator pEnd = v.end();


    while(pStart != pEnd ){
        cout << pStart -> age << " ";
        pStart++;
    }
    cout << endl;

}

#if 0

void test03(){
    vector<Teacher*> v;
    Teacher* t1 = new Teacher(10);
    Teacher* t2 = new Teacher(20);
    Teacher* t3 = new Teacher(30);

    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);

    vector<Teacher*>::iterator pStart = v.begin();
    vector<Teacher*>::iterator pEnd = v.end();

    while(pStart != pEnd){
        cout << (*pStart)-> age << " ";
        pStart++;
    }
    cout << endl;
}


void test04(){
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for(int i = 0;i < 5;i++){
        v1.push_back(i);
        v2.push_back(i*10);
        v3.push_back(i*100);
    }


    for(vector<vector<int>>::iterator it = v.begin();it != v.end();i++){
        for(vector<vector<int>>::iterator it = v.begin();it != v.end();subIt++){
            cout << *subIt << " ";
        }
        cout << endl;
    }
}


#endif

int main(){

    test02();

    return 0;
}