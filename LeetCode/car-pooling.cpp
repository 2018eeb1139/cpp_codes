class Solution {
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> m;
        for(auto &v:trips){
            m[v[1]]+=v[0];
            m[v[2]]-=v[0];
        }
        long long sum=0;
        for(auto &p:m){
            sum+=p.second;
            if(sum>capacity) return false;
        }
        return true;
    }
};