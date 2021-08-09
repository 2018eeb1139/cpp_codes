class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res;
        for(string w:words){
            res+=w;
            if(s==res) return true;
            if(res.length()>s.length()) return false;
        }
        return false;
    }
}