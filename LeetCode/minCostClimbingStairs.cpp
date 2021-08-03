class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f1 = 0, f2 = 0;
        for(int i = cost.size()-1; i >= 0; i--){
            cout<<"cost = "<<cost[i]<<endl;
            int f0 = cost[i] + min(f1, f2);
            cout<<"f0 = "<<f0<<endl;
            f2 = f1;
            f1 = f0;
            cout<<"f1 = "<<f1<<" f2 = "<<f2<<endl;
        }
        return min(f1, f2);
    }
};