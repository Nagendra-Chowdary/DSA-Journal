/*

15. 3Sum

Given an integer array nums, return all the triplets [nums[i],
nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    int curr=0;
    vector<vector<int>> res={};
      sort(nums.begin(),nums.end()); // sort O(nlogn)

     for(int i=0;i<nums.size();i++){
        if(nums[i]+curr==0 && i>0)continue;
     curr=0-nums[i];
        int l=i+1,r=nums.size()-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==curr){
                res.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
                while(l<r && nums[l]==nums[l-1])l++;
                while(l<r && nums[r]==nums[r-1])r--;
            }
            else if(sum>curr){
             r--;
            }
            else{
                l++;
            }
        }

     }
     return res;    
    }
int main(){
vector<int> nums={-1,0,1,2,-1,-4};

for(auto a:threeSum(nums)){
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}
}                //-4,-1,-1,0,1,2
