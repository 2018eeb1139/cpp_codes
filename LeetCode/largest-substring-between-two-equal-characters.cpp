class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> v(26,-1);int ans=-1;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==-1) v[s[i]-'a']=i;
            int op=i-v[s[i]-'a']-1;
            ans=max(op,ans);
        }
        return ans;
    }
};