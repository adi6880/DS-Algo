#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 class Solution{
    public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int count=0;
        while(i<j){
            if(nums[i]+nums[j] > k){
                j--;
            }else if(nums[i]+nums[j]< k){
                i++;
            }else{
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
 };

 // Main Program
 int main(){
    Solution sol;
    int k=2;
    vector<int> nums={4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4};
    cout<<sol.maxOperations(nums,k);
 }