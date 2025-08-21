
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void subsets(vector<int> nums,vector<int> res,int i,vector<vector<int>>& ans){

    if(i>=nums.size()){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[i]);
    subsets(nums,res,i+1,ans);
    res.pop_back();
    subsets(nums,res,i+1,ans);

}

int main(){
    vector<int> nums={1,2,3};
  vector<vector<int>> ans;
  subsets(nums,{},0,ans);
  for(auto i:ans){
    for(int a:i){
        cout<<a<<" ";
    }
    cout<<endl;
  }
}