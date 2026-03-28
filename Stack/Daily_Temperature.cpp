//LeetCode: 739
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int n=temperatures.size();
       stack<int>st;
       vector<int>result(n);
       for(int i=n-1;i>=0;i--){
        while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
            st.pop();
        }
        if(st.empty()){
            result[i]=0;
        }
        else{
            result[i]=st.top()-i;
        }
        st.push(i);
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