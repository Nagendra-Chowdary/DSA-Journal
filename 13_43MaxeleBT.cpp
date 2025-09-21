
// Not a leetcode problem.

/*
Maximum value in a binary tree.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
int val;
TreeNode* left;
TreeNode* right;
TreeNode(){
    val=0;
    left=nullptr;
    right=nullptr;
}
TreeNode(int v){
    val=v;
     left=nullptr;
    right=nullptr;
    
}
TreeNode(int v,TreeNode* lef,TreeNode* rig){
    val=v;
    left=lef;
    right=rig;
}
};


int maxVal(TreeNode* root){
     queue<TreeNode*> q;
     if(root==NULL)return -1;
     q.push(root);
     int maxi=root->val;
     while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            if(curr->val>maxi)maxi=curr->val;

        }
     }
     return maxi;
}
int main(){

TreeNode* root=new TreeNode(1);
TreeNode* rooot=new TreeNode(11);
TreeNode* sec=new TreeNode(2,root,rooot);
cout<<maxVal(sec)<<endl;
}