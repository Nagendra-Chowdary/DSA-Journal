
/*
155. Min Stack

Design a stack that supports push, pop,
top, and retrieving the minimum element in constant time.

https://leetcode.com/problems/min-stack/description/

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Stack{
    vector<pair<int,int>> s;
    int mini=INT_MAX;
    void push(int i){
        mini=min(mini,i);
        s.push_back({i,mini});
    }
    int top(){return s.back().first;}
    void pop(){
        s.pop_back();
        if(!s.empty()){mini=s.back().second;}
        else{mini=INT_MAX;}
    }

};
int main(){

}