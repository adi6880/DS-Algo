// Leetcode 739 Fail in 47 testcase (Time Limited Exceeded)
// Wrong Solution
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        int i=0;
        int j=1;
        vector<int>result;
        while(i<n){
            if(j>=n && i<n){
                result.push_back(0);
               j=i+2;
               i++;
             continue;
            }
            else if(temperatures[i]<temperatures[j]){
                result.push_back(j-i);
                j=i+2;
                i++;
            }else{
                j++;
            }
        }

        return result;
    }
};
int main(){
    Solution sol;
    vector<int> temperature={73,74,75,71,69,72,76,73};
    vector<int>result=sol.dailyTemperatures(temperature);

    for(auto &num:result){
        cout<<num<<",";
    }
}