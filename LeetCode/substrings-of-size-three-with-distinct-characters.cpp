class Solution {
public:
    int countGoodSubstrings(string s) {
        int t=0;
        for(int i=2;i<size(s);i++){
            if(s[i-2]!=s[i-1] && s[i-1]!=s[i] && s[i]!=s[i-2]) ++t;
        }
        return t;
    }
};