//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>

using namespace std;

namespace A{
    int a = 10;
    namespace B{
        int a = 20;
        void func(){
            cout << "hello namespce hahahah !!!!" <<endl;
        }


    }
}

void test(){
    cout << "A::a" <<A::a<<endl;
    cout << "B::a" <<A::B::a<<endl;
    //原来嵌套的依次访问就可以了！啊哈哈哈好玩
}
int main(){
    test();
    return 0;
}