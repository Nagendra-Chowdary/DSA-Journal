
/*

53. Maximum Subarray

https://leetcode.com/problems/maximum-subarray/description/

Given an integer array nums, find the subarray 
with the largest sum, and return its sum.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int largestSubArraySum(vector<int>& arr){
  int maxi=INT_MIN;
  int curr=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>curr){
        curr=arr[i];
    }
    else{

    curr+=arr[i];
    maxi=max(maxi,curr);
    }
  }
  return maxi;
}
int main(){

}