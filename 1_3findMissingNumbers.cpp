// 448.Find all Numbers disappeared in an array

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

/*
Given an array nums of n integers where nums[i] is in the range [1, n],
 return an array of all the integers in the range [1, n] that do not appear in nums.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> ans={};
    vector<int> track(nums.size(),0);
    for(int i=0;i<nums.size();i++){
        if(track[nums[i]-1]!=-1){
            track[nums[i]-1]=-1;
        }
    }
    for(int i=0;i<track.size();i++){
        if(track[i]!=-1){
            ans.push_back(i+1);
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,3,3,1};
    vector<int> ans=findDisappearedNumbers(nums);
for(auto i:ans){
        cout<<i<<endl;
}    

}