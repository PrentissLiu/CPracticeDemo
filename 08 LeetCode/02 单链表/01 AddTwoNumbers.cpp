//
// Created by Prentiss on 2019-04-13.
//
#include <iostream>
using namespace std;
 struct ListNode{
     int val;
     ListNode *next;
     ListNode(int x):val(x),next(nullptr){}
 };


 class Solution{
 public:
     ListNode *addTwoNumbers(ListNode *l1,ListNode *l2){
         ListNode head(-1);
         int carry = 0;
         ListNode *prev = &head;
         for(ListNode *pa = l1,*pb = l2){
             pa != nullptr || pb != nullptr;
             pa = pa == nullptr? nullptr :pa -> next,
             pa = pb == nullptr? nullptr :pb -> next,
             prev = prev -> next {

             };



     }
 };