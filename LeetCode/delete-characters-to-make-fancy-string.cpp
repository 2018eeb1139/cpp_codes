class Solution {
public:
    string makeFancyString(string s) {
        string ans="";int t=1;ans+=s[0];
        for(int i=1;i<s.length();++i) {
            t=(s[i]==s[i-1])?t+1:1;
            if(t<3) ans+=s[i];
        }
        return ans;
    }
};