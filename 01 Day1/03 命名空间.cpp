//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

namespace A{
    int a =  5;
}

namespace B{
    int a = 10;
}
//这里就要明白了
//明明空间要在前面的哦！


void test(){


    cout << "A::a"<< A::a <<endl;
    cout << "B::a"<< B::a <<endl;
}


int main(){
    test();
    return 0;
}
