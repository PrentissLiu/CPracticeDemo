//
// Created by Prentiss on 2019-04-07.
//

#include <iostream>
using namespace std;

class Printer{
public:
    static Printer* getInstance(){
        return pPrinter;
    }

    void PrintTest(string text){
        cout << "打印次数" << text << "已经打印次数" << mTime << endl;
        mTime++;


    }


private:
    Printer(){ mTime = 0; }
    Printer(const Printer&){}


private:
    static Printer* pPrinter;
    int mTime;

};



Printer* Printer::pPrinter = new Printer;


void test(){
    Printer* printer = Printer::getInstance();
    printer -> PrintTest("第一个文件");
    printer -> PrintTest("第二个");
    printer -> PrintTest("第三个");

}


int main(){

    test();

    return EXIT_SUCCESS;

}
