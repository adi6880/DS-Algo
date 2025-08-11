#include<iostream>// Leetcode 11
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int i=0,j=n-1;
        while(i<j){
            if(height[i]>height[j]){
                area=max(area,height[j]*(j-i));
                j--;
            }else{
                area=max(area,height[i]*(j-i));
                i++;
            }
        }
        cout<<area;
    }
};

// Main Program
int main(){
    Solution sol;
    vector<int> height={1,1};
    sol.maxArea(height);
}