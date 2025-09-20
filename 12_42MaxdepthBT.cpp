/*
104. Maximum Depth of Binary Tree

https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along
the longest path from the root node down to the farthest leaf node.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxDepth=0;
        queue<TreeNode*> q;
        if(root!=NULL){
            q.push(root);
        }else{
            return maxDepth;
        }
        while(!q.empty()){
            maxDepth++;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                
            }
        }
        return maxDepth;
    }
};