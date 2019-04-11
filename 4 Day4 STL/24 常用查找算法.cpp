//
// Created by Prentiss on 2019-04-11.
//

find(iterator beg, iterator end,value)
//beg 容器开始迭代器，end是容器结束迭代器
//查找 返回查找元素的位置


find_if(iterator beg,iterator end, _callback);
//条件查找，查找返回true，否则返回false
//_callback返回 回调函数/谓词



adjacent_find(iterator beg, iterator end,_callback);
//查找相邻重复元素
//_callback 返回相邻元素的第一个位置的迭代器



bool binary_search(iterator beg,iterator end,value);
//二分查找 在无序序列中不可用
//return 布尔类型，true /false



count(iterator beg,iterator end,valu);
//count算法，统计元素出现的次数
//value 回调函数或者谓词 返回bool类型的函数对象
//return int 返回元素的个数



count_if(iterator beg,iterator end,_callback);
//count算法，统计元素出现的次数
//callback是回调函数或者谓词