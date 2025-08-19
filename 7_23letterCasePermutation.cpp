/*
784. Letter Case Permutation

https://leetcode.com/problems/letter-case-permutation/

Given a string s, you can transform every letter individually
 to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. Return the output in any order.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> letterCasePermutation(string s) {
            vector<string> track={""};
        for(int i=0;i<s.size();i++){
            char c=s[i];
                   vector<string> ans;
            if(isalpha(c)){
                   for(int k=0;k<track.size();k++){

                   ans.push_back(track[k]+(char)tolower(c));
                    ans.push_back(track[k]+(char)toupper(c));
                   }    
                
            }
            else{
                for(auto a:track){
                    cout<<"why";
                    ans.push_back(a+(char)c);
                 
                }

            }
            track=ans;
        }
        return track;
    }
int main(){
    string str="strinnnng";
vector<string> s={str};
cout<<str.substr(3,4)<<endl;
}