//
// Created by Prentiss on 2019-04-07.
//
//不知道为什么56行一直有一个错



//在类的外部（作用域的外部）访问类的私有成员 友元函数（特权函数）

#include <iostream>
using namespace std;

class Building;

//友元类
class MyFriend{
public:

    void LootAtBedRoom(Building& building);
    void PlayinBedRoom(Building& building);

};



class Building{
    //全局函数做友元函数
    //这就是与后面全局友元函数对应的
    friend void CleanBedRoom(Building& building);
#if 1
    //成员函数做友元函数
    //friend void MyFriend::LookAtBedRoom(Building& building);
    friend void MyFriend::PlayinBedRoom(Building& building);

#else

    //定义友元类
    friend class MyFriend;

#endif

public:
    Building();

public:
    string mSittingRoom;

private:
    string mBedroom;



};




#if 1
//友元成员函数
void MyFriend::LootAtBedRoom(Building& building){
    cout << "朋友在客厅" << building.mBedroom <<endl;
}
#endif

void MyFriend::PlayinBedRoom(Building& building) {
    cout << "我的朋友玩耍在" << building.mBedroom << endl;
}







void CleanBedRoom(Building& building){
    cout << "友元全局函数访问" << building.mBedroom << endl;
    //这就是友元函数的全局访问的函数了，class里面要有与之对应的
}

Building::Building() {
    this-> mSittingRoom = "客厅";
    this-> mBedroom = "卧室";
}


int main(){


#if 0          //全局友元函数
    CleanBedRoom(building);
    myFriend
#endif



    Building building;
    MyFriend myfriend;  //两个实例

    CleanBedRoom(building);
    myfriend.LootAtBedRoom(building);
    myfriend.PlayinBedRoom(building);

    return 0;



}

