class Solution {
public
    char slowestKey(vectorint& v, string s) {
        char ans=s[0];
        int t=v[0];
        for(int i=1;is.size();i++){
            int d=v[i]-v[i-1];
            if(d==t) ans=max(ans,s[i]);
            if(dt){
                ans=s[i];t=d;
            }
        }
        return ans;
    }
};