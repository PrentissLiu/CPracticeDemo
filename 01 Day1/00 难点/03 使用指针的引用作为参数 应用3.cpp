//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

int m_value = 1;

void func(int *&p){
    //p = &m_value;

    p = new int;            //p是main中*pn指针的引用给（通过参数传过来）
                            //传过来的时候是个指针，函数接的时候是*&p（（引用p）的指针）
                            //*p就是main()方法里pn指向的内容
    *p = 5;


}


int main(int argc,char *argv[]){
    int n = 2;
    int *pn = &n;
    cout << *pn << endl;


    func(pn);
    cout << *pn << endl;

    return 0;


}