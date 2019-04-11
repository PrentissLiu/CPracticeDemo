//
// Created by Prentiss on 2019-04-10.
//
#include <iostream>
#include <string>
using namespace std;


//string构造函数
    string();   //创建一个空的字符串
    string(const string& str);      //使用一个string对象初始化一个string对象
    string(const char* s);          //使用字符串s初始化
    string(int n,char c);           //使用n个字符串c初始化



//字符串的基本赋值操作
    string& operator =(const char* s);          //char* 类型的字符串，赋值给当前字符串
    string& operator =(const string &s);        //字符串s赋值给当前的字符串
    string& operator =(char c);


    string& assign(const char *s);
    string& assign(const char *s,int n);        //字符串前n个字符赋值给字符串
    string& assign(const string &s);
    string& assign(int n,char c);
    string& assign(const string &s,int start, int n);   //start卡丝是的n个字符赋值给字符串



//string 存取字符
    char& operator[](int n);        //[]获取字符
    char& at(int n);                //at方法获取字符



    string& operator +=(const string& str); //重载+=操作符
    string& operator +=(const char* str);
    string& operator +=(const char c);

//字符串拼接
    string& append(const char *s);                  //字符串s拼接到结尾
    string& append(const char *s, int n);           //字符串前n个拼接到结尾
    string& append(const string &s);                //同operator+=()
    string& append(const string &s,int pos, int n); //字符串s中从pos开始的n个字符连接到当前字符串结尾
    string& append(int n,char c);                   //当前字符串中添加n个字符c




//string 查找和替换
    int find(const string& str,int pos = 0)const;   //查找str第一次出现的位置，从pos位置开始查找
    int find(const char*s,int pos = 0)const;        //   s
    int find(const char* s,int pos, int n)const;    //从pos位置查找前n个字符出现的位置
    int find(const char c,int pos =0)const;         //查找字符c第一次出现的位置

    int rfind(const string& str,int pos = npos)const;   //npos什么鬼。。
    int rfind(const char* s,int pos,int n)const;        //查找s最后一次出现的位置，从pos开始查找
    int rfind(const char c,int pos,int n)const;         //查找c最后一次出现的位置

    string& replace(int pos, int n,const string& str);  //替换从pos开始的n个字符，替换为str
    string& replace(int pos, int n,const char* s);      //替换从pos开始的n个字符串为字符串s





//字符串的比较
//大于返回1，小于返回-1，==时返回0
    int compare(const string &s)const;
    int compare(const char *s)const;



//string子串
string substr(int pos = 0;int n = npos)const;       // 由pos开始的n个字符组成的字符串



//string 插入和删除操作
string& insert(int pos, const char* s);             //插入字符串
string& insert(int pos, const string& str);         //插入字符串
string& insert(int pos, int n, char c);             //指定位置插入n个字符串c
string& erase(int pos, int n = npos);               //删除从pos开始的n个字符



//string和c-style字符串的转换
string str = "itcast";                  //string 转char*
const char* cstr = str.c_str();


char* s = "itcast";                     //char* 转换成string
string str(s);
