//217. Contains Duplicate

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

//Time complexity --- O(n)

  bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i])==set.end()){
                set.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }

int main(){
    vector<int> nums={1,2,3};
    bool ans=containsDuplicate(nums);
    
}
