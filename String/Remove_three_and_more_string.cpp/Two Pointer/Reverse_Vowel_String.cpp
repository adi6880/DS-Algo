class Solution {
public:
    bool is_vowel(char ch){
        string str="aeiouAEIOU";
        for(auto vow: str){
            if(ch==vow){
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=(s.length())-1;
        while(i<j){
            if(is_vowel(s[i]) && is_vowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(!is_vowel(s[i])){
                i++;
            }else{
                j--;
            }
        }
        return s;
    }
};