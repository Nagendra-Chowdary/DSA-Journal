/*
gfg problem

reverse the first K elements in the queue.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseKele(queue<int>& q,int k){
    stack<int> s;
    for(int i=0;i<k;i++){
        cout<<"inside 1"<<endl;
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        cout<<"inside 2"<<endl;
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        cout<<"inside 3"<<endl;
        q.push(q.front());
        q.pop();
    }
}

int main(){
queue<int> q;
q.push(1);
q.push(111);
q.push(11);
q.push(12);
reverseKele(q,4);
cout<<q.front()<<" ";
q.pop();
cout<<q.front()<<" "<<endl;
q.pop();
}