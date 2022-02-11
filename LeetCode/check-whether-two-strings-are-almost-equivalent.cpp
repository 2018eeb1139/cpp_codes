class Solution {
public:
    bool checkAlmostEquivalent(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i=0;i<s1.size();i++) v1[s1[i]-'a']++;
        for(int i=0;i<s2.size();i++) v2[s2[i]-'a']++;
        
        for(int i=0;i<26;i++){
            if(abs(v1[i]-v2[i])>3) return false;
        }
        return true;
    }
};