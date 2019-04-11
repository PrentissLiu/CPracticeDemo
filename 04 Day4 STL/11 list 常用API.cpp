//
// Created by Prentiss on 2019-04-10.
//

//list构造函数
list<T> lstT;
list(beg,end);       //把[beg,end]区间中的元素拷贝给本身
list(n,elem);        //构造函数将n个elem拷贝给本身
list(const list &lst);      //拷贝构造函数


//list 数据插入和删除
push_back(elem);        //尾部插入一个
pop_back();             //删除容器最后一个元素
push_front(elem);       //头部插入一个元素
pop_front();            //移除开头的一个元素

insert(pos,elem);       //pos位置插入elem元素的拷贝
insert(pos,n,elem);     //pos位置插入n个elem元素
insert(pos,beg,end);    //区间插入到pos位置

clear();                //删除所有
erase(pos);             //删除pos位置数据
remove(elem);           //删除容器中所有与elem匹配的元素


//list大小操作
size();                 //返回容器中的元素个数
empty();                //判断容器是否为空
resize(num);            //重新指定容器的长度
resize(num,elem);       //重新指定容器的长度，如果变长 elem填充新的位置




//list赋值
assign(beg,end);            //区间中的数据拷贝赋值给本身
assign(n,elem);             //n个elem拷贝赋值给本身
list& operator = (const list &lst);     //重载等号操作符
swap(lst);                  //lst与本身的元素互换



//list数据存取
front();                //返回第一个元素
back();                 //返回最后一个元素


//list反转排序
reverse();          //反转链表
sort();             //list排序


