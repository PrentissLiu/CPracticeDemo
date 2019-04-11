//
// Created by Prentiss on 2019-04-11.
//

copy(iterator beg,iterator end,iterator dest)
//容器内指定范围元素拷贝到另外一个容器中
//dest是目标起始迭代器



replace(iterator beg,iterator end,oldvalue,newvalue)
//指定范围内的元素代替为新元素




replace_if(iterator beg,iterator end,_callback,newvalue)
//swap 互换两个容器的元素



//常数生成算法
accumulate(iterator beg,iterator end,value)
//计算容器元素累计总和



fill(iterator beg,iterator end )
//向容器中添加新元素
//fill算法 向容器添加新的元素




//常用集合算法

set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//dest目标容器开始迭代器




set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//求两个set集合的并集
//dest目标容器开始迭代器


set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
//求两个集合的差集
//dest目标容器开始迭代器

