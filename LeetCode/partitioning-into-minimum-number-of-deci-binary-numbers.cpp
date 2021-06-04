class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(auto c:n) mx=max(mx,c-'0');
        return mx;
    }
};