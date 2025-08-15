/*

977. Squares of a Sorted Array

https://leetcode.com/problems/squares-of-a-sorted-array/description/

Given an integer array nums sorted in non-decreasing order,
 return an array of the squares of each number sorted in non-decreasing order.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        vector<int> res;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]>=0)break;
            temp.push_back(nums[i]*(-1));
        }
        reverse(temp.begin(),temp.end());//reverse --- O(n)
//           for(int i:temp){
//     cout<<i<<endl;
//    }
        int j=0;
        while(i<nums.size()&& j<temp.size()){
            if(nums[i]<temp[j]){
                res.push_back(nums[i]);
                i++;
            }
            else{
            res.push_back(temp[j]);
            
            j++; 
            }
        }
        while(i<nums.size()){
            res.push_back(nums[i]);
            i++;
        }
        while(j<temp.size()){
            res.push_back(temp[j]);
            j++;
        }
        for(int i=0;i<res.size();i++){
            res[i]*=res[i];
        }
        return res;
    }

int main(){
    vector<int> nums={-4,-1,0,3,10};
   for(int i:sortedSquares(nums)){
    cout<<i<<endl;
   }
}
