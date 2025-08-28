

/*


21. Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. 
The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.


https://leetcode.com/problems/merge-two-sorted-lists/description/

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


 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if(list1==NULL && list2==NULL)return NULL;
        // if(list1==NULL)return list2;
        // if(list2==NULL)return list1;
        
        ListNode* list3=new ListNode(-1);
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* t=list3;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                t->next=temp1;
                t=t->next;
                temp1=temp1->next;
            }
            else{
             t->next=temp2;
             t=t->next;
             temp2=temp2->next;
            }
        }
             while(temp1!=NULL){
                t->next=temp1;
                t=t->next;
                temp1=temp1->next;
            }
                 while(temp2!=NULL){
                t->next=temp2;
                t=t->next;
                temp2=temp2->next;
            }
        return list3->next;

    }


    int main(){

    }