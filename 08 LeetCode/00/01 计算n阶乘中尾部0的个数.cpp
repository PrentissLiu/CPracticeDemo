//
// Created by Prentiss on 2019-04-13.
//

#include <iostream>
using namespace std;
//2. 尾部的零
//中文
//English
//设计一个算法，计算出n阶乘中尾部零的个数
//
//样例
//样例  1:
//	输入: 11
//	输出: 2
//
//	样例解释:
//	11! = 39916800, 结尾的0有2个。
//
//样例 2:
//	输入:  5
//	输出: 1
//
//	样例解释:
//	5! = 120， 结尾的0有1个。
//
//挑战
//O(logN)的时间复杂度


class Solution {
        public:
        /*
         * @param n: A long integer
         * @return: An integer, denote the number of trailing zeros in n!
         */

        Solution(long long n){
            cout << "构造函数" << endl;
        }

        long long trailingZeros(long long n) {
            // write your code here, try to do it without arithmetic operators.

            long sum = 0;
            int count;

            while(n>=5){
                n /= 5;
                sum +=n;
                count ++;
            }

            return sum;



            //



        }
};


void test(){
    Solution solution(900);       //定义了一个对象
    long ret = solution.trailingZeros(8);  //类里面的函数用对象来调用    ？？？这里怎么弄啊哭辽

    cout << ret << endl;
}

int main(){
    test();


    return 0;
}