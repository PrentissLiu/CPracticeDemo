//
// Created by Prentiss on 2019-04-10.
//

//reserve预留出来空间是这个Demo的重点

//deque没有空间保留（reserve）的功能，因为他不是连续空间的那种，有点类似于链表
//可以两边（pop/push_front/back()这种两边操作）


#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    //预先开辟空间
    v.reserve(100000);


    int* pStart = NULL;
    int count = 0;
    for(int i = 0; i < 100000 ; i++){
        v.push_back(i);
        if(pStart != &v[0]){
            pStart = &v[0];
            count++;
        }
    }

    cout << count << endl;


    return  0;


}