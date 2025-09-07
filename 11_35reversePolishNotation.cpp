/*
150. Evaluate Reverse Polish Notation


https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
 

You are given an array of strings tokens that 
represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that 
represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.
 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9


*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int solve(int a,int b,char c){
        int ans;
        if(c=='+')ans=a+b;
        else if(c=='-')ans=a-b;
        else if(c=='/')ans=a/b;
        else if(c=='*')ans=a*b;
        return ans;
    }
    bool isnum(string c){
        return !(c=="+"|| c=="-" || c=="*" || c=="/");
    }
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(int i=0;i<tokens.size();i++){
            if(isnum(tokens[i])){
                st.push(tokens[i]);
            }
            else {
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();

                string ans=to_string(solve(a,b,tokens[i][0]));
                st.push(ans);
            }
        }
        return stoi(st.top());
    }

int main(){

}