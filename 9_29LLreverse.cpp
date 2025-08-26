/*


206. Reverse Linked List

Given the head of a singly linked list,
 reverse the list, and return the reversed list.

https://leetcode.com/problems/reverse-linked-list/

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

    
    ListNode* reverseList(ListNode* head) {
        if( head==NULL || head->next==NULL){
            return head;
        }
        ListNode* t=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return t;
    }
