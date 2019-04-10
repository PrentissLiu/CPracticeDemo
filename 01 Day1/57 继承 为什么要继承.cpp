//
// Created by Prentiss on 2019-04-08.
//

#include <iostream>
using namespace std;

class IndexPage{
public:
    void Header(){
        cout << "Header" << endl;
    }



    void LeftNavigation(){
        cout << "左侧菜单" << endl;
    }


    void MainBody(){
        cout << "网页底部" << endl;
    }


private:
    string mTitle;
};



class NewsPage:public IndexPage{
public:
    //原来被挤成的也是要写上public
    //默认的是private的
    //'MainBody' is a private member of 'NewsPage'
    void MainBody(){
        //继承类重写父类的东西
        cout << "NewPage 的 MainBody" << endl;
    }
};


void test(){
    NewsPage* newspage = new NewsPage;
    newspage-> Header();
    newspage-> MainBody();
    newspage->LeftNavigation();
}


int main(){
    test();

    return EXIT_SUCCESS;
}