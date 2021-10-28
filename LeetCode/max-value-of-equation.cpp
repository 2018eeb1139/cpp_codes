class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        deque<pair<int,int>> q;
        int n = points.size();
        int ans = -1e9;
        for(auto& it:points){
            while(!q.empty() && it[0]-q.front().second > k)
                q.pop_front();
            if(!q.empty())
                ans = fmax(ans,q.front().first+it[0]+it[1]);
            while(!q.empty() && q.back().first < it[1]-it[0])
                q.pop_back();
            q.push_back({it[1]-it[0],it[0]});
        }return ans;
    }
};