//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<T> v;
vector(v.begin(),v.end());          //将v从[begin,end]区间中的元素拷贝给本身
vector(n,elem);                     //构造函数将n个elem拷贝给本身
vector(const vector &vec);          //拷贝构造函数



//vector构造函数
void test(){
    int arr[] = { 2, 4, 5, 6 };
    vector<int> v1(arr,arr + sizeof(arr));
}



//vector 常用赋值操作
assign(beg,end);            //[beg,end]区间中国的数据拷贝给赋值本身
assign(n,elem);             //n个elem拷贝赋值给本身
vector& operator = (const vector &vec);         //重载等号操作符
swap(vec);                                      //vec与本身的元素互换




//vector大小操作
size();                     //返回容器中的元素个数
empty();                    //判断容器是否为空
resize(int num);            //重新定义容器的长度num
resize(int num,elem);       //重新定义容器长度为num，如果变长，以elem填充新的位置
capacity();                 //容器的容量
reserve(int len);           //容器预留len个元素的长度



//vector数据存取操作
at(int idx);        //返回idx所指的数据
operator[];         //返回索引idx值得数据，越界的时候报错
front();            //返回容器中的第一个数据元素
back();             //返回容器中的最后一个数据元素




//vector插入和删除操作
inset(const_iterator pos,int count ,ele);   //迭代器指向位置pos插入count个元素ele
push_back(ele);                             //尾部插入元素ele
pop_back();                                 //删除最后一个元素
erase(const_iterator start,const_iterator endl);        //删除迭代器start到end之间的元素
erase(const_iterator pos);                  //删除迭代器指向的元素
clear();                                    //删除容器中的所有元素





