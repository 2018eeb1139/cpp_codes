vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int>>m;
    for(int i=0;i<a.size();i++){
        string s=a[i];
        sort(s.begin(),s.end());
        m[s].push_back(i+1);
    }
    vector<vector<int>>ans;
    for(auto x: m){
        ans.push_back(x.second);
    }
    return ans;
}
