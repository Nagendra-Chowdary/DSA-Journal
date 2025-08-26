
/*
92. Reverse Linked List II

https://leetcode.com/problems/reverse-linked-list-ii/description/

Given the head of a singly linked list and two integers left
 and right where left <= right, reverse the nodes
 of the list from position left to position right, and return
  the reversed list.

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
ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode* leftprev=dummyNode;
        ListNode* curr=dummyNode->next;
        int v=1;
        while(v<left){
            leftprev=curr;
            curr=curr->next;
            v++;
        }
        ListNode* prev=NULL;
        ListNode* temp=curr;
        ListNode* tempcurr;

        while(v<=right){
            tempcurr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=tempcurr;
            v++;
        }
        leftprev->next=prev;
        curr->next=temp;

        return dummyNode->next;
        
    }