#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*

543. Diameter of Binary Tree

https://leetcode.com/problems/diameter-of-binary-tree/description/

Given the root of a binary tree, return the length 
of the diameter of the tree.

The diameter of a binary tree is the length 
of the longest path between any two nodes in a tree. 
This path may or may not pass through the root.

The length of a path between two nodes is represented
 by the number of edges between them.

*/


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
    int solve(TreeNode* root,int &diameter){
       if(root==nullptr){
        return 0;
       }
       int left_height=solve(root->left,diameter);
       int right_height=solve(root->right,diameter);
       diameter=max(diameter,left_height+right_height);
       return 1+max(left_height,right_height);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        solve(root,diameter);
        return diameter;
    }
};

int main(){

}