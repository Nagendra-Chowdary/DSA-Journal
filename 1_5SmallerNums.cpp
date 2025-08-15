//1365. How Many Numbers Are Smaller Than the Current Number

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
   vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp=nums;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])==map.end())
                map[nums[i]]=i;
            
        }
        for(int i=0;i<temp.size();i++){
            temp[i]=map[temp[i]];
        }
        return temp;
    }

int main(){
vector<int> nums={8,1,2,2,3};
for(auto i:smallerNumbersThanCurrent(nums)){
    cout<<i<<endl;
}
}