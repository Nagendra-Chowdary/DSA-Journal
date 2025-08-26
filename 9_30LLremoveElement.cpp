

/*
203.Remove linked list element

https://leetcode.com/problems/remove-linked-list-elements/submissions/1748556070/


Given the head of a linked list and an integer val, remove all the nodes of
 the linked list that has Node.val == val, and return the new head.

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


    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev=NULL;
        ListNode* newHead=new ListNode(-1);
        newHead->next=head;
        ListNode* temp=newHead;
        while(temp->next!=NULL){
            if(temp->next->val==val){
                    temp->next=temp->next->next;
                }else{

                    temp=temp->next;
                }
        }
        return newHead->next;
    }
  int main(){

  }