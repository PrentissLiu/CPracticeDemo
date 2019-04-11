//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <list>
#include <algorithm>


using namespace std;
int main(){
    list<int> myList;
    for(int i = 0;i < 10; i++)
        myList.push_back(i);

    list<int>:: node = myList._Myhead->_Next;
    //咦这里_Myhead 为什么没有啊 。。。

}