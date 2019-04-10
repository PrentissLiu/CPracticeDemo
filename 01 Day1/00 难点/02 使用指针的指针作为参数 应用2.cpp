//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;


void func(int **p){     //用指针的指针传参数，下面果然收到了之后是5
                        //p是一个指针的指针



    *p = new int;
    **p =5;
}


int main(int argc,char *argv[]){
    int n = 2;
    int *pn = &n;
    cout << *pn << endl;

    func(&pn);

    cout << *pn << endl;

    return 0;
}