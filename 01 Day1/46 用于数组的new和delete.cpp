//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

/*
 * void test(){
    char *pStr = new char[100];

    int* pArr1 = new int[100];

    int* pArr2 = new int[10]{
        1,2,3,4,5,5,5,1,2,5
    };



}
 */




class Person{
public:
    Person(){
        pName = (char*)malloc(strlen("undefined") + 1);
        strcpy(pName,"undefined");
        mAge = 0;
    }
    Person(char* name, int age){
        pName  = (char*)malloc(sizeof(name));
        strcpy(pName,name);
        mAge = age;
    }


    ~Person(){
        if(pName != NULL)
            delete pName;
    }



public:     //如果写成private，下面的函数就不能访问了
    char* pName;
    int mAge;


};


void test(){

    //栈聚合初始化
    Person person[] = { Person("John",8),Person("Smith",20)};

    cout << person[1].pName << endl;

    //创建堆上对象数组 必须提供构造函数
    Person* works = new Person[20];

}


int main(){
    test();

    return 0;
}


//另外void* 函数不要用delete释放内存，因为没有经过析构函数，很有可能出现问题


//总结：在new一个对象的时候使用[],那么在删除的时候也要[]
//     这样编译器就知道这是一个数组对象，会防止产生数组对象（好几个对象）没有被删除干净