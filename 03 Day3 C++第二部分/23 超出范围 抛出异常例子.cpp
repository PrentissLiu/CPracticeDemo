//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
#include <stdexcept>        //注意加这个喔!
using namespace std;

class Person{
public:
    Person(int age){
        if(age < 0 ||  age> 150)
            throw out_of_range("年龄应该在1-150岁之间");
    }
public:

};

int main(){
    try{
        Person p(1222);
    }
    catch(out_of_range& ex){
        cout << ex.what() << endl;
    }


    return 0;
}