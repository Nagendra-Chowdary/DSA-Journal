/*


111. Minimum Depth of Binary Tree

https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along 
the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

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
    int minDepth(TreeNode* root) {
        int depth=0;
        queue<TreeNode*> q;
        if(root!=NULL){

        q.push(root);
        depth++;
        }else{
            return depth;
        }
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* qf=q.front();
                q.pop();
                if(!qf->left && !qf->right){
                    return depth;
                }
                 if(qf->left)q.push(qf->left);
                 if(qf->right)q.push(qf->right);
            }
            depth++;
        }
        return depth;
    }
};