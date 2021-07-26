class Solution {
public:
    bool checkRecord(string s) {
        int l=s.length();int absent_count=0;
        for(int i=0;i<l;i++){
            if(s[i]=='A') absent_count++;
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L') return false;
        }
        if(absent_count>=2) return false;
        return true;
    }
};