/*
112. Path Sum

https://leetcode.com/problems/path-sum/description/

Given the root of a binary tree and an integer targetSum,
 return true if the tree has a root-to-leaf path such that 
 adding up all the values along the path equals targetSum.

A leaf is a node with no children.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 //* Definition for a binary tree node.
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return false;
        queue<pair<TreeNode*,int>> q;
        q.push({root,root->val});
        while(!q.empty()){
            auto [node,value]=q.front();
            q.pop();
            if(node->left)q.push({node->left,node->left->val+value});
            if(node->right)q.push({node->right,node->right->val+value});
            if(!node->left && !node->right && value==targetSum)return true;
        }
        return false;
    }
};