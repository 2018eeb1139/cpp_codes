class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m1=*max_element(nums.begin(),nums.end());
        int m2=*min_element(nums.begin(),nums.end());
        return __gcd(m1,m2);
    }
};