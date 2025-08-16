
/*
845. Longest Mountain in Array

https://leetcode.com/problems/longest-mountain-in-array/description/

You may recall that an array arr is a mountain array if and only if:

arr.length >= 3
There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given an integer array arr, return the length of the longest subarray,
 which is a mountain. Return 0 if there is no mountain subarray.
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int longestMountain(vector<int>& arr) {
        int ans=0;
        int i=1;
        // int r;
        for(;i<arr.size();i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int l=i-1,currl=i,currr=i;
                int r=i+1;
                while (r<arr.size() && l>=0 && arr[currl]>arr[l] && arr[currr]>arr[r]){
                    currl=l;
                    l--;
                    
                }
                while(r<arr.size() && arr[currr]>arr[r]){
                    currr=r;
                r++;
                    
                }
                if(currr-currl+1>ans)ans=currr-currl+1;
                i=currr;
             
            }

        }
     return ans;
    }

int main(){
    vector<int> arr={2,1,2,4,7,3,2,2,5};
    cout<<longestMountain(arr)<<endl;
}