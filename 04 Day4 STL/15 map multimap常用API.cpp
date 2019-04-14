//
// Created by Prentiss on 2019-04-10.
//

//map构造函数
map<T1,T2> mapTT;       //map默认构造函数
map(const map &mp);     //拷贝构造函数



//map赋值操作
map& operator = (const map &mp);        //重载等号操作符
swap(mp);                               //交换两个集合容器




//map插入数据元素操作
map.insert(...);
map<int,string>mapStu;

//通过pair的方式插入对象
mapStu.insert(pair<int,string>(3,"小张"));
//通过pair的方式插入对象
mapStu.insert(make_pair(-1,"小组"));
//通过value_type的方式插入对象
mapStu.insert(map<int,string>::value_type(1,"小李"));
//通过数组的方式插入值
mapStu[3] = "小刘";
mapStu[4] = "说话";






//map删除操作
clear();
erase(pos);     //删除pos迭代器所指的元素，返回下一个元素的迭代器
erase(bag,end); //删除区间的元素，返回下一个元素的迭代器
erase(keyElem); //删除容器中key为keyElem的对组


//map查找操作
find(key);
cout(keyElem);      //返回容器中key为keyElem的对组个数，对于map来说，要么是1 要么是0
lower_bound(keyElem);   //返回第一个key>= keyElem元素的迭代器
upper_bound(keyElem);   //返回第一个key>keyElem元素的迭代器
equal_range(keyElem);   //返回容器中的key与keyElem相等的上下限两个迭代器






---


map<string, string> namemap;

//增加。。。
namemap["岳不群"]="华山派掌门人，人称君子剑";

//查找。。
if(namemap.find("岳不群") != namemap.end()){
        ...
}