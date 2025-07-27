class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int i=0,j=0;
        while(j < n-1){
            if((nums[i]< nums[j] && nums[j]> nums[j+1])
            ||
            (nums[i]>nums[j] && nums[j]< nums[j+1])
            ){
                count++;
                i=j;
            }
            j++;
        }
        return count;
    }
};