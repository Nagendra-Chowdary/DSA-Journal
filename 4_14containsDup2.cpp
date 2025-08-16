/*

219. Contains Duplicate II

https://leetcode.com/problems/contains-duplicate-ii/description/

Given an integer array nums and an integer k, 
return true if there are two distinct indices i and j 
in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
      set<int> s;
      
      for(int i:nums){
        if(s.find(i)!=s.end())return true;
        s.insert(i);
        if(s.size()>k)s.erase(nums[i-k]);
           
        }
        return false;
      }
    
int main(){
vector<int> nums={1,2,3,1};
cout<<containsNearbyDuplicate(nums,2);
}