//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
using namespace std;

void test() {
    char ch = cin.get();
    cout << ch << endl;     //只输出一个字符
    cin.get(ch);            //获取一个又

    cout << ch << endl;     //又输出一个字符


}

void test2() {

    //链式编程，一个一个字符的获取啊，神奇
    char char1, char2, char3, char4;
    cin.get(char1).get(char2).get(char3).get(char4);
    cout << char1 << char2 << char3 << char4 << endl;

}
void test3(){

    char buf[1024] = { 0 };
    cin.get(buf,1024);
    //cin.getline(buf,1024);    //cin.getline() 和cin.get()这两个函数都可以嗷
    cout << buf;
}


//忽略哪几个字符，哇这个功能好棒喔
void test4(){
    char buf[1024] = { 0 };
    cin.ignore(2);//忽略缓冲区的前两个字符
    cin.get(buf,1024);
    cout << buf << endl;
}


//cin.putback()是把数据放回缓冲区的操作
void test5(){
    char ch = cin.get();
    cout << "从缓冲区取走的字符" << ch << endl;

    cin.putback(ch);
    char buf[1024] = { 0 };
    //我们就可以把任何字符串放入到标准输入输出流里面 这很好！
    cin.get(buf,1024);
    cout << buf << endl;

}


//cin.peek()只是偷窥，其他的什么就也没有做
void test6(){
    char ch = cin.peek();
    cout << "从缓冲区偷窥到的数据" << ch << endl;         //哈哈哈只能偷窥一个字符！可爱 ！
    char buf[1024] = { 0 };
    cin.get(buf,1024);
    cout << buf << endl;
}





int main(){
    test6();

    return 0;
}