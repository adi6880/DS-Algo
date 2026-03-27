#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        int n=intervals.size();
        int count=0;
        int i=0,j=1;

        while(j<n){
            vector<int> curr_intervals=intervals[i];
            vector<int> next_intervals=intervals[j];

            int cs=curr_intervals[0];
            int ce=curr_intervals[1];

            int ns=next_intervals[0];
            int ne=next_intervals[1];
            if(ce<=ns){ // no overlapping
                i=j;
                j++;
            }else if(ce<=ne){ //overlapping
                j++;
                count++;
            }else if(ce>=ne){ //overlapping
                i=j;
                j++;
                count++;
            }
        }
      return count;  
    }
};
int main(){
    Solution sol;
    vector<vector<int>> nums={{1,2},{2,3},{3,4},{1,3}};
    int count=sol.eraseOverlapIntervals(nums);
    cout<<"Intervals: "<<count<<endl;
}