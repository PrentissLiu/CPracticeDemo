//
// Created by Prentiss on 2019-04-10.
//

//stack的构造函数
stack<T> stkT;          //stack对象的默认构造形式
stack(const stack &stk);    //拷贝构造函数



//stack赋值操作
stack& operator = (const stack &stk);       //重载等号操作符



//stack赋值操作
push(elem);                 //栈顶添加一个元素
pop();
top();                      //返回栈顶部的元素


//stack大小操作
empty();                    //是否为空
size();
