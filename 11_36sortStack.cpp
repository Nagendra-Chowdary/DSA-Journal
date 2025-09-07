#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Sorting a stack

stack<int> sortStack(stack<int> s){
        stack<int> temp;
        while(!s.empty()){
            int a=s.top();
            s.pop();
            while(!temp.empty() && temp.top()>a){
                s.push(temp.top());
                temp.pop();
            }
            temp.push(a);
        }
        return temp;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(31);
    s.push(13);
    s.push(21);
    //stack now -- 1 31 13 21
    stack<int> ans=sortStack(s);
    while(!ans.empty()){
        cout<<ans.top()<<' ';
        ans.pop();
    }
    cout<<endl;
}