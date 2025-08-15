// 121. Best Time to Buy and Sell Stock

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

/*
You are given an array prices where prices[i] is
the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day
 to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.
 If you cannot achieve any profit, return 0.
*/

#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> &prices)
{
int buy=prices[0];
int maxProfit=0;
for(int i:prices){
    if(i-buy >maxProfit){
        maxProfit=i-buy;
    }
    else if(i<buy){
      buy=i;
    }
}
return maxProfit;
}
int main()
{
    vector<int> prices={7,1,5,3,6,4};
 cout<<maxProfit(prices)<<endl;
}
