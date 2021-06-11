class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int t=0;int mj;
        for(auto i:m){
            if(i.second>nums.size()/2) {t=1;mj=i.first;break;}
        }
        if(t==0) return -1;
        else return mj;
    }
};


