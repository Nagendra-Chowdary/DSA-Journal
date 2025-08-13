//268. Missing Number
#include<iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            ans^=i;
        }
        return ans;
    }
int main(){
 vector<int> nums={0,4,2,3};
 int ans=missingNumber(nums);
 cout<<ans<<endl;
}