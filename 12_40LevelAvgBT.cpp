/*

637. Average of Levels in Binary Tree

https://leetcode.com/problems/average-of-levels-in-binary-tree/description/

Given the root of a binary tree, return the average value 
of the nodes on each level in the form of an array.
 Answers within 10-5 of the actual answer will be accepted.


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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            double sum=0;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(sum/s);
            
        } 
        return ans;
    }
};