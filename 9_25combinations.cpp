
/*
77.Combinations

https://leetcode.com/problems/combinations/

Given two integers n and k, return all possible 
combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void backtrack(vector<int>& nums,vector<vector<int>>& ans,int i,int k,vector<int>& res){
 
if(res.size()>=k){
    ans.push_back(res);
    return;
}
for(int j=i;j<nums.size();j++){
    res.push_back(nums[j]);
    cout<<"level "<<i<<endl;
    for(int ii:res){cout<<ii<<" ";}
    cout<<endl;
    backtrack(nums,ans,j+1,k,res);
    res.pop_back();
}

}

int main(){
vector<int> nums={1,2,3};
vector<vector<int>> ans;
vector<int> res;
backtrack(nums,ans,0,2,res);
for(auto a:ans){
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}
}