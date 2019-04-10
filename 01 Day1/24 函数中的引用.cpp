//
// Created by Prentiss on 2019-04-06.
//
//对引用传递还是不是很了解..好奇怪哦

#include <iostream>
using namespace std;

void ValueSwap(int m,int n){
    //1.值传递
    int temp = m;
    m = n;
    n = temp;
    cout << m << n << endl;

}



void PointerSwap(int *m, int *n){
    //2.地址传递
    int temp = *m;
    *m = *n;
    *n = temp;
    cout << m << "    " <<  n << endl;
}



void ReferenceSwap(int& m,int& n){
    int temp = m;
    m = n;
    n = temp;
    cout << m << "       " << n <<endl;
}


int main(){
    int a = 10;
    int b = 20;


    ValueSwap(a,b);
    PointerSwap(&a,&b);
    //既然是地址传递，传参数的时候就要把地址拿出来传出去

    ReferenceSwap(a,b);



    return 0;

}

