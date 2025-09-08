
/*

225. Implement Stack using Queues

Implement a last-in-first-out (LIFO) stack using only two queues.
 The implemented stack should support all the functions of a 
 normal stack (push, top, pop, and empty).

https://leetcode.com/problems/implement-stack-using-queues/description/

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Implementation of stack with queue;

struct Stack{

    queue<int> q;
    void push(int i){
        q.push(i);
    }
    int pop(){
        int s=q.size();
        while(s>1){
            q.push(q.front());
            q.pop();
            s--;
        }
        s= q.front();
        q.pop();
        return s;
        
    }
    int top(){
        return q.back();
    }
    bool empty(){
        return q.empty();
    }
};


int main(){
Stack s;
s.push(55);
s.push(35);
cout<<s.top()<<endl;

}