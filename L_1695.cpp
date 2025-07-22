#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       unordered_set<int> set;
       int n=nums.size();
       int i=0,j=0,sum=0;
       int result=0;
       while(j<n){
        if(!set.count(nums[j])){
            sum+=nums[j];
            result=max(result,sum);
            set.insert(nums[j]);
            j++;
        }else{
            while(i<n && set.count(nums[j])){
                sum-=nums[i];
                set.erase(nums[i]);
                i++;
            }
        }
       }
       cout<<result;
    }
};
int main(){
    Solution sol;
    vector<int>num={5,2,1,2,5,2,1,2,5};
    sol.maximumUniqueSubarray(num);
}