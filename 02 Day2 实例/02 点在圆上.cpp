//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

class Point{
public:
    void setX(int mx){ mX = x ;}
    void setY(int my){ mY = y ;}
    int getX() {return mX};
    int getY() {return mY};



private:
    int mX;
    int mY;
};


class Circle{
public:
    setP(int x ,int y){
        mP.setX(x);
        mP.setY(y)d;
    }

    void setR(int r){ mR = r; }
    Point& getP();{return mP; }
    int get() { return nR; }



    void isPointInCircle(Point& point){
        int distance((point.getX()-mp.getX())*(point.getY()-point.getY()-point.getY()))
    }



private:
    Point mP;
    int mR;


};