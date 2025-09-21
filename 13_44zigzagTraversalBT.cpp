/*
103. Binary Tree Zigzag Level Order Traversal

https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

Given the root of a binary tree, return the zigzag
 level order traversal of its nodes' values. (i.e., from left to right, 
then right to left for the next level and alternate between).
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
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> st;
        if(root==nullptr)return {};
        
        bool rev=false;
        st.push(root);
        while(!st.empty()){
        int s=st.size();
        vector<int> ans;
        for(int i=0;i<s;i++){
          TreeNode* curr=st.front();
          ans.push_back(curr->val);
          st.pop();
        if(curr->left){
            st.push(curr->left);
        
        }
        if(curr->right)st.push(curr->right);

        }
        if(rev)reverse(ans.begin(),ans.end());
        rev=!rev;
        res.push_back(ans);
        }
        return res;
    }
};