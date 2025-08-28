/*
234. Palindrome Linked List

Given the head of a singly linked list,
 return true if it is a palindrome or false otherwise.
 
https://leetcode.com/problems/palindrome-linked-list/description/
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    ListNode* next=NULL;
    int val;
    ListNode(){next=NULL;val=0;}
    ListNode(int vall){val=vall;next=NULL;}
    ListNode(int vall,ListNode* nextt){val=vall;next=nextt;}
};

bool isPalindrome(ListNode* head){
    //find the middle node.
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;

    }

    //reverse the list from middle element till the end.
    ListNode* prev=NULL;
    ListNode* curr=slow;
    ListNode* temp;
    while(curr!=NULL){
      temp=curr->next;
      curr->next=prev;
      prev=curr;
      curr=temp;

    }//here prev will be the last element (new head of a reversed LL)

    //Now compare both element by element.
    temp=head;
    while(temp!=NULL && prev!=NULL){
        if(temp->val!=prev->val){return false;}
        temp=temp->next;
        prev=prev->next;
    }
    return true;
}

int main(){
ListNode* head5=new ListNode(1);
ListNode* head4=new ListNode(9,head5);
ListNode* head=new ListNode(10,head4);
ListNode* head1=new ListNode(10,head);
ListNode* head2=new ListNode(9,head1);//here head2 will be  the first LL element;
ListNode* head3=new ListNode(1,head2);

// cout<<head->val;
cout<<isPalindrome(head2)<<endl;
}