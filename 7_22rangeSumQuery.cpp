#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        prefixSum[0]=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            prefixSum[i]=sum;
        }
    }
    
    int sumRange(int left, int right) {
       if(left==0)return prefixSum[right];
        return prefixSum[right]-prefixSum[left-1];
    }
};
int main(){
    vector<int> nums={0,1,-3,4,5};
NumArray* num=new NumArray(nums);
num->sumRange(2,5);
}