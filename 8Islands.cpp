/*
200.Number of Islands

https://leetcode.com/problems/number-of-islands/description/

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water),
 return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally
or vertically. You may assume all four edges of the grid are all surrounded by water.
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int numIslands(vector<vector<char>> &grid)
{
    if(grid.empty())return;
    vector<pair<int,int>> directions={{0,1},{1,0},{0,-1},{-1,0}};
    int count=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]=='1'){
                count++;
              queue<pair<int,int>> q;
              grid[i][j]='0';
              q.push({i,j});
              while(!q.empty()){
                // pair<int,int> p=q.front();
                auto [r,c]=q.front();
                q.pop();
            for(auto [dr,dc]:directions){
                int nr=r+dr;
                int nc=c+dc;
                if(nr>0 && nr<grid.size()-1 && nc>0 && nc<grid[0].size()-1 && grid[nr][nc]=='1'){
                           grid[nr][nc]='0';
                           q.push({nr,nc});
                }
            }
              }
            }
        }
    }
}
int main()
{

}