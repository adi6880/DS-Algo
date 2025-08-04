class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int w1=word1.length();
        int w2=word2.length();
        int i=0,j=0;
        while(i<w1 || j<w2){
            if(i<w1 && j<w2){
                word3+=word1[i];
                word3+=word2[j];
            }else if(i< w1){
                word3+=word1[i];
            }else{
                word3+=word2[j];
            }
            i++;
            j++;
        }
        return word3;
    }
};