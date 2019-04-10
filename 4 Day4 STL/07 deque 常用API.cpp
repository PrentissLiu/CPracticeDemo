//
// Created by Prentiss on 2019-04-10.
//

//deque构造函数

deque<T> deqT;  //默认构造形式
deque(beg,end);     //构造函数将[beg,end]中间的元素拷贝给本身
deque(n,elem);      //构造函数将n个elem拷贝给本身
deque(const deque &deq);        //拷贝构造函数



//deque赋值操作
assign(beg,end);            //区间中的数据拷贝给本身
assign(n,elem);             //n个elem拷贝赋值给本身
assign operator =(const deque &deq);        //重载等号运算符
swwap(deq);;                //deq与本身的元素互换


//deque大小操作
deque.size();       //返回容器中元素的个数
deque.empty();      //返回是否为空
deque.resize(num);  //重新制定容器的长度为num
deque.resize(num,elem)      //重新指定容器的长度为num，如果容器变长了，则用elem填充内容


//deque双端插入和删除操作
push_back(elem);        //尾部追加一个新的数据
push_front(elem);       //头部追加一个新的数据
push_back();            //删除容器的最后一个数据
push_front();           //删除容器的第一个数据


//deque数据存取
at(idx);        //返回索引
operator[];     //返回索引idx指的数据
front();        //返回第一个数据
back();         //返回最后一个数据



//deque 插入操作
insert(pos,elem);
insert(pos,n,elem);     //pos位置插入n个elem
insert(pos,beg,end);    //pos位置插入n个elem数据
insert(pos,beg,end);    //pos位置插入区间的数据


//deque删除工具
clear();        //移除所有的数据
erase(beg,end);     //删除区间的数据
erase(pos);         //删除pos位置的数据


