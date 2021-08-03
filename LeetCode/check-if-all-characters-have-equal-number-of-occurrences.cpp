class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(char c:s) m[c]++;
        auto it1=m.begin();
        int val=it1->second;
        for(auto it:m){
            if(it.second!=val) return false;
        }
        return true;
    }
};