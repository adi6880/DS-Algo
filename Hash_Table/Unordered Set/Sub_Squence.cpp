// Leetcode 128

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<climits>
using namespace std;
class Solution{
    public: 
    int LongestSubSqeunce1(vector<int>&nums){  // O(log(n))+(n);
        sort(begin(nums),end(nums));
        int longest=0;
        int smallValue=INT_MIN;
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 ==smallValue){
                count++;
                smallValue=nums[i];
            }else if(nums[i]!= smallValue){
                smallValue=nums[i];
                count=1;
            }
            longest=max(longest,count);
        }
        return longest;

    }

    int LongestSubSqeunce2(vector<int>&nums){
        unordered_set<int>st;
        int count=1;
        int longest=0;
        for(auto &num:nums){
            st.insert(num);
        }

        for(auto &num:st){
            if(st.find(num-1) == st.end()){
                count=1;
                int x=num;
                while(st.find(++x) != st.end()){
                    count++;
                }
                
        }
        longest=max(longest,count);
    }

    return longest;
}
};

int main(){
    vector<int>nums={100,2,200,3,4,1};
    Solution sol;
    // cout<<sol.LongestSubSqeunce1(nums);
    cout<<sol.LongestSubSqeunce2(nums);
}