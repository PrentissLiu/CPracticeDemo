//
// Created by Prentiss on 2019-04-10.
//

//构造函数
queue<T> queT;
queue(const queue &que);        //拷贝构造函数



//queue存取、插入、删除操作
push(elem);     //队尾添加一个元素
pop();          //队列头移除一个元素
back();
front();



//queue赋值操作
queue& operator = (const queue &que);   //重载等号操作符



//queue大小操作
empty();        //判断队列是否为空
size();         //返回队列的大小