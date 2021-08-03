class Solution {
public:
    int getLucky(string s, int k) {
       int ans=0; 
        for(auto& ch:s) {
            int x=ch-'a'+1; 
            ans+=x/10+x%10; 
        }
        while(--k){
            int sm=0; 
            for(;ans;ans/=10) sm+=ans%10; 
            ans=sm; 
        }
        return ans;
    }
};