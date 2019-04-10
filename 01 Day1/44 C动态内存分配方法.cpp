//
// Created by Prentiss on 2019-04-07.
//


//使用C中的动态内存分配方法我们就需要这样写了
#include <iostream>
using namespace std;

class Person{
public:
    Person(){
        mAge = 20;

        //malloc返回一个void类型的指针，因此需要强转
        //分配内存的时候必须要确定对象的长度
        pName = (char*)malloc(strlen("John") + 1);
        strcpy(pName, "John");
    }


    void Init(){
        mAge = 20;
        pName = (char*)malloc(strlen("John") + 1);
        strcpy(pName,"John");
    }


    void Clean(){
        if(pName != NULL){
            free(pName);
        }
    }


private:

    int mAge;
    char* pName;
};


int main(){
    Person* person = (Person*)malloc(sizeof(Person));

    //malloc有可能申请内存失败，因此需要靠返回值来判断内存分配情况
    if(person == NULL)
        return 0;

    //调用初始化函数
    person ->Init();

    //清理对象
    person -> Clean();


    //释放person对象
    free(person);


    return EXIT_SUCCESS;
}