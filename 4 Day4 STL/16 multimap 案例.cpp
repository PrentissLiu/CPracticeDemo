//
// Created by Prentiss on 2019-04-11.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
#define part1 1
#define part2 2
#define part3 3
#define ALLdepartment 4


class person{
public:
    string name;
    int age;
    double salary;
    string tel;
};


void CreatePerson(vector<person>& vlist){
    string seed = "ABCDE";
    for(int i = 0; i < 5; i++){
        person p;
        p.name = "员工";
        p.name += seed[i];
        p.age = rand()%30 + 20;
        p.salary = rand()%20000 + 10000;
        p.tel = "10086";
        vlist.push_back(p);

    }

}


void PersonByGroup(vector<person>& vlist,multimap<int,person>& plist){
    int operate = -1;

    for(vector<person>::iterator it = vlist.begin();it != vlist.end(); it++){
        cout << "当前员工信息" << endl;
        cout << it-> name << it-> age << it -> salary << endl;
        cout << "请输入部门：1、2、3、4" << endl;
        scanf("%d",&operate);

        while(true){
            if(operate == part1){
                plist.insert(make_pair(part1,*it));
                break;

            }else if(operate == part2){
                plist.insert(make_pair(part2,*it));
                break;

            }else if(operate == part3){
                plist.insert(make_pair(part3,*it));
                break;
            } else

                cout << "重新输入" << endl;
                scanf("%d\n",&it);


        }

    }
    cout << "员工部分分配完成" << endl;
}


void printList(multimap<int,person>& plist,int myoperate){
    if(myoperate == ALLdepartment){
        for(multimap<int,person>::iterator it = plist.begin();it != plist.end();it++){
            cout << it-> second.name << it->second.age << it->second.age << it->second.salary << it->second.tel<< endl;

        }

        return;             //不知道这里为什么不能return 0;
    }

    multimap<int,person>::iterator it = plist.find(myoperate);
    int deparCout = plist.count(myoperate);
    int num = 0;
    if(it != plist.end() && num<deparCout){
        cout << it->second.name << it->second.tel << it->second.age << it->second.salary << endl;
        it++;
        num++;          //这里为什么两个自增的变量？
    }

}

//根据用户操作显示不同部门的人员列表
void showPersonList(multimap<int,person>& plist,int myoperate){
    switch(myoperate){
        case part1:
            printList(plist,part1);
            break;
        case part2:
            printList(plist,part2);
            break;
        case part3:
            printList(plist,part3);
            break;
        case ALLdepartment:
            printList(plist,ALLdepartment);
            break;
    }
}


void PersonMenu(multimap<int,person>& plist){
    int flag = -1;
    int isexit = 0;

    while(true){
        cout <<"输入选项" << endl;
        scanf("%d\n",&flag);


        switch(flag){
            case part1:
                showPersonList(plist,part1);
                break;

            case part2:
                showPersonList(plist,part2);
                break;

            case part3:
                showPersonList(plist,part3);
                break;

            case ALLdepartment:
                showPersonList(plist,ALLdepartment);
                break;
            case 0:
                isexit = 1;
                break;

            default:
                cout <<"输入错误" << endl;
                break;
        }
        if(isexit == 1){
            break;
        }
    }
}




int main(){
    vector<person> vlist;
    multimap<int,person> plist;

    //创建五个员工
    CreatePerson(vlist);
    PersonByGroup(vlist,plist);

    //根据用户输入显示不同的部门员工信息列表
    PersonMenu(plist);



    return 0;
}