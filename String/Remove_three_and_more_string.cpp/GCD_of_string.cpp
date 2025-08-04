class Solution {
public:
    int gcd(int m, int n){
        int temp;
        while(n!=0){
            temp=n;
            n=m%n;
            m=temp;
        }
        return m;
    }
    string gcdOfStrings(string str1, string str2) {
        string str3;
        if(str1+str2 != str2+str1){
            return "";
        }
        int num1=str1.length();
        int num2=str2.length();
        str3=str1.substr(0,gcd(num1,num2));
        return str3;
    }
};