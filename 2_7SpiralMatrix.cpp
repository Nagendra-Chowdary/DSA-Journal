/*
54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.
*/

//https://leetcode.com/problems/spiral-matrix/description/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int cols=matrix[0].size();
        int rows=matrix.size();
        int c=0,r=0;
        int lc=cols-1,lr=rows-1;
        int i=0;
        while(i<cols*rows){
            for(int k=c;k<=lc && i<cols*rows;k++){
               cout<<matrix[r][k]<<" ";
               ans.push_back(matrix[r][k]);
               i++;
            }
            r++;
            for(int k=r;k<=lr && i<cols*rows;k++){
                cout<<matrix[k][lc]<<" ";
                ans.push_back(matrix[k][c]);
                i++;
            }
            lc--;
            for(int k=lc;k>=c && i<cols*rows;k--){
                cout<<matrix[lr][k]<<" ";
                ans.push_back(matrix[lr][k]);
                i++;
            }
            lr--;
            for(int k=lr;k>=r && i<cols*rows;k--){
                cout<<matrix[k][c]<<" ";
                 ans.push_back(matrix[k][c]);

                 i++;
            }
            c++;
            
        }
        cout<<endl;
        return ans;
    }
int main(){
vector<vector<int>> matrix={
    // {1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12}
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
spiralOrder(matrix);
}