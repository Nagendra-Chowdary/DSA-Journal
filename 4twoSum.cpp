//1.Two Sum

//https://leetcode.com/problems/two-sum/description/

/*
Given an array of integers nums and an integer target,
 return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

You can return the answer in any order.
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

  vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end()){
                ans.push_back(map[nums[i]]);
              ans.push_back(i);
            }
            else{
                map[target-nums[i]]=i;
            }
        }

     return ans;   
    }

int main(){
vector<int> nums={19,8,4,5};
int target=9;
for(auto i:twoSum(nums,target)){
cout<<i<<endl;
}
}