/*
209. Minimum Size Subarray Sum

https://leetcode.com/problems/minimum-size-subarray-sum/description/

Given an array of positive integers nums and a positive integer target,
 return the minimal length of a subarray whose sum is 
greater than or equal to target. If there is no such subarray, return 0 instead.

*/


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

   int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int total=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            while(total>=target){
                mini=min(mini,i-l+1);
                total=total-nums[l];
                l++;
            }
        }
        if(mini==INT_MAX)return 0;
        return mini;
    }
int main(){
vector<int> nums={1,2,3,4,5,7};
cout<<minSubArrayLen(7,nums);
