//
// Created by Prentiss on 2019-04-09.
//

#include <iostream>
#include <fstream>


using namespace std;

//使用文件流的put、get、giline等成员函数可以对字符进行输入输出


int main(){
    char* sourceFileName = "./29_source.txt";
    char* targetFileName = "./29_target.txt";

    ifstream ism(sourceFileName,ios::in);

    ofstream osm(sourceFileName,ios::out);


    if(!ism){
        cout <<"file open error" << endl;
    }


    while(!ism.eof()) {
        char buf[1024] = {0};
        ism.getline(buf, 1024);
        cout << buf << endl;
        osm << buf << endl;
    }

    ism.close();
    osm.close();


    return 0;


}



