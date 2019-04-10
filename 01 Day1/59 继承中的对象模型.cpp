



#include<iostream>
using namespace std;

class Aclass{
public:
    int mA;
    int mB;

};

class Bclass:public Aclass{
public:
    int mC;
};

class Cclass:public Bclass{
public:
    int mD;
};

void test(){
    cout << sizeof(Aclass) << endl;
    cout << sizeof(Bclass) << endl;         //比上面多四个字节
    cout << sizeof(Cclass) << endl;         //又比上面多四个字节
}
//总结：其实可以理解为结构体，子类是由父类成员叠加子类新成员构成的

int main(){
    test();
}