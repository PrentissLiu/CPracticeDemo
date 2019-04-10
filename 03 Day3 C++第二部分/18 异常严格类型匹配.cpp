//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

void test1(){
    throw 10;

    string ex = "你个智障又写错了代码啊哈哈哈哈哈哈";

    throw ex;
}


int main(){
    try {
        test1();
    }

#if 1
    catch (int){
        cout << "啊哈哈哈哈抓住int异常!!"  << endl;
    }

#endif

    catch(char){
        cout << "啊哈哈哈哈哈抓住了char异常!!!" << endl;
    }



    catch(...){
        cout << "啊哈哈哈哈哈哈所有异常!!!!!!!!!" << endl;
    }

    return 0;
}