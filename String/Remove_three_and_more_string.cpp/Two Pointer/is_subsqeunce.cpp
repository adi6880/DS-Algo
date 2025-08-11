#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==s.length();
    }
};

int main(){
    Solution sol;
    string a="abc";
    string b="ahbgdc";
    cout<<sol.isSubsequence(a,b);
}