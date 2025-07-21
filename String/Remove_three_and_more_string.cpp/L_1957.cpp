#include<iostream>
using namespace std;


class Solution {
public:
    string makeFancyString(string s) {
        int i=0;
        int count=0;
        string s1;
        for(auto& l : s){
            if(l==s[i+1] ){
                if(count<1){
                    s1+=l;
                    count++;
                }
            }else{
                s1+=l;
                count=0;
            }
            i++;
        }
        cout<<s1;
    }
}; 

int main(){
    Solution sol;
    string s="leeetcode";
    sol.makeFancyString(s);
}