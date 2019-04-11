//
// Created by Prentiss on 2019-04-11.
//

//函数适配器bind1st bind2nd
//需求：遍历容器的时候，将容器中的值都加上100之后显示出来


#include <functional>
#include <iostream>
#include <vector>
using namespace std;

//根据我们的函数对象使用的是一元函数对象还是二元函数对象：

class MyPrint:public binary_function<int,int,void>{
public:
    void operator()(int v1,int v2)const{
        cout << v1 << "  " << v2 << "  " << v1+v2 << endl;
    }
};


//1 函数适配器
void test1(){
    vector<int>v;
    for(int i = 0;i < 10;i++){
        v.push_back(i);

    }
    cout << " 输入起始的值 " << endl;
    int x;
    cin >> x;

    //for_each(v.begin(),v.end(),bind1st(MyPrint(),x));
    for_each(v.begin(),v.end(),bind2nd(MyPrint(),x));
    //总结：bind1st()是把x参数绑定在方法MyPrint()的第一个参数，就不管什么情况都是x
    //     bind2nd()是把x参数绑定在方法MyPrint()的第二个参数
}





//2 取反适配器

class GreaterThanFive:public unary_function<int,bool>{
public:
    bool operator()(int v)const{
        return v > 5;
    }
};

void test2(){
    vector<int>v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(),v.end(),not1(bind2nd(greater<int>(),5)));
    if(it == v.end()){
        cout << "没找到" << endl;
    }else{
        cout << "没找到" << *it << endl;
    }


    //排序
    //这个是二元函数的对象
    sort(v.begin(),v.end(),not2(less<int>()));
    for_each(v.begin(),v.end(),[](int val){
        cout << val << " ";   });
    cout << endl;


    //not1 是对一元函数对象取反
    //not2 是对二元函数对象取反

}


void MyPrint3(int v,int v2){
    cout << v + v2 << "  " ;        //原来加不加endl是横着还是输出啊哈哈哈，endl就是一次IO流的结束（一行结束）哈哈哈
}



//3 函数指针适配器
void test3(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),bind2nd(ptr_fun(MyPrint3),100));
    //绑定的是第二个值

}

//4 成员函数适配器
class Person{
public:
    Person(string name,int age){
        mName = name;
        mAge = age;
    }

    //打印函数
    void ShowPerson(){
        cout << "成员函数" << mName << "  " << mAge << endl;
    }

    void Plus100(){
        mAge += 100;
    }
public:
    string mName;
    int mAge;
};

void MyPrint4(Person& person){
    cout << person.mAge << "   " << person.mName << endl;

}

void test4(){
    vector <Person> v;
    Person p1("小红",34);
    Person p2("小绿",22);
    Person p3("小小",220);
    Person p4("小百",12);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    for_each(v.begin(),v.end(),mem_fun_ref(&Person::ShowPerson));
    //参数里面调用方法的时候竟然没有括号
    //利用mem_fun_ref 将Person内部成员函数适配

    for_each(v.begin(),v.end(),MyPrint4);

    for_each(v.begin(),v.end(),mem_fun_ref(&Person::Plus100));


}


void test5(){
    vector<Person*> v1;
    Person p1("aaaa",12);
    Person p2("bbbb",23);
    Person p3("ccccc",342);
    Person p4("dddddf",123);

    v1.push_back(&p1);
    v1.push_back(&p2);
    v1.push_back(&p3);
    v1.push_back(&p4);

    for_each(v1.begin(),v1.end(),mem_fun(&Person::ShowPerson));
}
//总结：如果容器中放的是对象指针，那就用mem_fun
//     如果容器中放的是对象实体，那就用mem_fun_ref



int main(){
    test5();

    return 0;

}