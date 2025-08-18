/*

70. Climbing Stairs

https://leetcode.com/problems/climbing-stairs/

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. 
In how many distinct ways can you climb to the top?
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
   int climbStairs(int n) {
              if(n<3)return n;
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<dp.size();i++){
            dp[i]=dp[i-1]+dp[i-2];

        }
        return dp[n];
    }

int main(){

}