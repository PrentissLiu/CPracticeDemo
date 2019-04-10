//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

void test1(){
    cout << "hello";

    //刷新缓冲区
    cout.flush();
}



//cou.put()输出一个字符
void test2(){
    cout.put('a');      //一个字符要用'' ？？？
    cout.put('h').put('h').put('y').put('a');
}

//cout.write()输出字符串
void test3(){
    char* str = "啊哈哈哈哈哈惆怅 ";
    for(int i = 1;i < strlen(str);i++){
        cout.write(str,i);
        cout << endl;
    }
}

int main(){

    test3();


    return 0;
}