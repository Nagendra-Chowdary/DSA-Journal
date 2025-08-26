
/*
876. Middle of the Linked List

https://leetcode.com/problems/middle-of-the-linked-list/


Given the head of a singly linked list, return 
the middle node of the linked list.

If there are two middle nodes, return the second middle node.


*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int val=0;
        while(temp->next!=NULL){
            temp=temp->next;
            val++;
        }
        val=val%2?(val/2)+1:val/2;
        temp=head;
        for(int i=0;i<val;i++){  
        temp=temp->next;
        }
        return temp;
    }
int main(){
    ListNode* head=new ListNode(9);
}