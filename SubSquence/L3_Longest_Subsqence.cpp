#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>dict(256,-1);
        int l=0;
        int r=0; 
        int maxLen=0;

        while(r<s.length()){

            if(dict[s[r]] != -1){
                if(dict[s[r]]>=l){
                    l=dict[s[r]]+1;
                }
            }

            maxLen=max(maxLen,(r-l)+1);
            dict[s[r]]=r;
            r++;
           
    }
    cout<<maxLen;
}
};

int main(){
    Solution sol;
    string s="abcabcbb";

    sol.lengthOfLongestSubstring(s);
}