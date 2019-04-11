//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <set>

using namespace std;

void test01(){
    set<int> s;
    pair<set<int>::iterator,bool> ret = s.insert(10);
    if(ret.second){
        cout << "插入成功" << *ret.first << endl;
    }
    else{
        cout << "插入失败" << *ret.first << endl;
    }


    ret = s.insert(10);
    if(ret.second){
        cout << "插入成功" << *ret.first << endl;
    }
    else {
        cout << "插入失败" << *ret.first << endl;
    }

}


struct myCompare02{
    bool operator()(int v1,int v2){
        return v1 > v2;
    }
};


//set从大到小排序
void test02(){
    srand((unsigned int)time(NULL));

    set<int,myCompare02>s;
    for(int i = 0;i < 10;i++){
        s.insert(rand() % 100);
    }

    for(set<int,myCompare02>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}

//set容器中存放对象
class Person{
public:
    Person(string name,int age){
        this->mName = name;
        this->mAge = age;
    }
public:
    string mName;
    int mAge;
};


struct myCompare03{
    bool operator()(const Person& p1,const Person& p2){
        return p1.mAge > p2.mAge;
    }
};


void test03(){
    set<Person,myCompare03>s;

    Person p1("aaa",20);
    Person p2("bbb",22);
    Person p3("cccc",44);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);


    for(set<Person,myCompare03>::iterator it = s.begin();it != s.end(); it++){
        cout << it -> mName << it->mAge << endl;
    }
}

int main(){
    test02();


    return 0;

}