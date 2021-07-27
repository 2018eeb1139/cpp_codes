class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,i=0,t=0;
        while(i<nums.size()){
            while(i<nums.size()&&nums[i]==1) {t++;i++;}
            {m=max(t,m);t=0;i++;}
        }
        return m;
    }
};