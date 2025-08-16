
/*
1200.Minimum Absolute Difference

https://leetcode.com/problems/minimum-absolute-difference/

Given an array of distinct integers arr, find all pairs of 
elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs),
 each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr
*/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
     
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]<mini){
             mini=arr[i]-arr[i-1];
            }
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mini){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }

int main(){

}