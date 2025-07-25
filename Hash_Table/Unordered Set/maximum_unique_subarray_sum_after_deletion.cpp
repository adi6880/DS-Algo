#include<iostream>
#include<unordered_set>
#include<vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
      unordered_set<int> st;
      int negMax=INT_MIN;
      int sum=0;
      
      for(auto& num: nums){
        if(num<=0){
            negMax=max(negMax,num);
        }else if(!st.count(num)){
            sum+=num;
            st.insert(num);

        }
      }
      cout<<sum;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,3,4,5};
    sol.maxSum(nums);
}