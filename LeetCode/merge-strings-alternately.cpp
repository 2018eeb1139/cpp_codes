class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;string res;
        while(i<min(word1.length(),word2.length())){
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        int len1=word1.length(),len2=word2.length();
        if(len1<len2) res+=word2.substr(i);
        else res+=word1.substr(i);
        return res;
    }
};