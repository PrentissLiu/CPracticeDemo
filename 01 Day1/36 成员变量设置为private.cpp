//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

class AcessLevels{
public:
    int getReadOnly(){  return readOnly; }

    void setReadWrite(int val){   readWrite == val;}

    int getReadWrite(){ return readWrite };

    void setWriteOnly(int val){ writeOnly = val };




private:
    int readOnly;
    int readWrite;
    int noAccess;
    int writeOnly;
};


