/*
1266. Minimum Time Visiting All Points

https://leetcode.com/problems/minimum-time-visiting-all-points/description/

On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.

You can move according to these rules:

In 1 second, you can either:
move vertically by one unit,
move horizontally by one unit, or
move diagonally sqrt(2) units (in other words, move one unit vertically then one unit horizontally in 1 second).
You have to visit the points in the same order as they appear in the array.
You are allowed to pass through points that appear later in the order, but these do not count as visits.

*/

#include <iostream>
#include <vector>
using namespace std;
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        vector<int> point1=points[0];
        int time=0;
        for(int i=1;i<points.size();i++){
         int x1=point1[0],y1=point1[1];
         int x2=points[i][0],y2=points[i][1];
         time+=max(abs(x2-x1),abs(y2-y1));
         
         point1=points[i];
        }
        return time;
    }

int main(){
vector<vector<int>> points={
    {3,2},
    {-2,-2},
   
};
cout<<minTimeToVisitAllPoints(points)<<endl;


}
