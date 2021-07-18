class NumArray {

public:
    NumArray(vector<int>& nums) {
        dp.push_back(0);
        for(int i:nums) dp.push_back(dp.back()+i);
    }
    
    int sumRange(int left, int right) {
        return dp[right+1]-dp[left];
    }
    private:
    vector<int> dp;
};

/**
 * Your NumArray object will be instantiated and called as such:t
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
