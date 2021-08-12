class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        if(strs.size()==0) return res;
        unordered_map<string,vector<string>> m;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }
        for(auto p:m) res.push_back(p.second);
        return res;
    }
};