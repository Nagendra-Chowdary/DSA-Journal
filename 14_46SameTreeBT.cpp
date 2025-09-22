/*

100. Same Tree

https://leetcode.com/problems/same-tree/description/

Given the roots of two binary trees p and q,
write a function to check if they are the same or not.

Two binary trees are considered the same if 
they are structurally identical, and the nodes have the same value.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)return true;
        if(!(p!=nullptr && q!=nullptr))return false;
       queue<pair<TreeNode*,TreeNode*>> qu;
     qu.push({p,q});
     while(!qu.empty()){
        int s=qu.size();
        for(int i=0;i<s;i++){
            TreeNode* f=qu.front().first;
            TreeNode* s=qu.front().second;
            qu.pop();
            if(f->val!=s->val)return false;
            if(f->left && s->left)qu.push({f->left,s->left});
            else if(!(!f->left && !s->left))return false;
            if(f->right && s->right)qu.push({f->right,s->right});
            else if(!(!f->right && !s->right))return false;

        }
     }
        return true;
        }
    


int main(){

}