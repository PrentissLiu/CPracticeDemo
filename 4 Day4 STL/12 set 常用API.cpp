//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <set>
using namespace std;

//set构造函数
set<T> st;      //set默认构造函数
mulitset<T> mst;        //multiset默认构造函数
set(const set &st);     //拷贝构造函数


//set赋值操作
set& operator = (const set &st);    //重载等号操作符
swap(st);                           //交换两个集合容器



//set大小操作
size();
empty();


//set插入和删除操作
insert(elem);               //容器中插入元素
clear();                    //清除所有的元素
erase(pos);                 //删除pos迭代器所指的元素，返回下一个元素的迭代器
erase(beg,end);             //删除区间[beg,end]的所有元素，返回下一个迭代器
erase(elem);                //删除值为elem的元素


//set查找操作
find(key);                  //查找key是否存在，返回迭代器；否则返回set.end();
count();                    //查找键key的元素个数
lower_bound(keyElem);       //返回第一个key>=keyElem 元素的迭代器
upper_bound(keyElem);       //返回第一个key >keyElem 元素的迭代器
equal_range(keyElem);       //返回容器中的key与keyElem相等的上下限两个迭代器


