//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

int m_value = 1;

void func(int *p){      //用一个指针p指向pn指针
    p = &m_value;       //改变指针p指向的地址
}


int main(int argc,char *argv[]){
    int n = 2;
    int *pn = &n;       //指针pn指向n的地址

    cout << *pn <<endl; //指针pn取值是2
    func(pn);

    cout << *pn << endl;//这里本来应该收到的是1的地址，但是会出现问题
                        //出现问题：原来的指针还保持着原来的值
    return 0;
}