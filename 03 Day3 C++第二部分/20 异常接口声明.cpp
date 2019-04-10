//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

void Test(){
    throw 10;
}


//只抛出特定类型的异常
void Test2()throw(int,char,char*){
    string exception = "error";
    throw exception;
}


void Test3() throw(){
    throw 10;

}

int main(){
    try{
        //Test();
        Test2();
        //Test3();
    }

    catch(...){
        cout << "异常异常异常嘻嘻嘻" << endl;
    }

    return 0;
}