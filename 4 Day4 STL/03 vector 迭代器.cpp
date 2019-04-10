//
// Created by Prentiss on 2019-04-10.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0;i < 10;i++){
        v.push_back(i);
        cout << v.capacity() << endl;       //v.capacity() 容器的容量，我们看到容量是不断变化的

        //容量满了之后，拷贝到一个更大的原来的空间（而并不是直接增加
    }
}