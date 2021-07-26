class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(auto c:s) m[c]++;
        int res=0;
        bool odd_count=false;
        for(auto &p:m){
            if(p.second%2==0) res+=p.second;
            else{
                odd_count=true;
                res+=p.second-1;
            }
        }
        if(odd_count) res++;
        return res;
    }
};