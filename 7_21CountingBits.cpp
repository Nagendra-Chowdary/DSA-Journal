/*

338. Counting Bits


https://leetcode.com/problems/counting-bits/description/

Given an integer n, return an array ans of length n + 1 such
 that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        
        int offset=1;
      for(int i=1;i<n+1;i++){
        if(offset*2==i){
            offset=i;
        }
        dp[i]=1+dp[i-offset];
      }
        return dp;
    }
int main(){

}
