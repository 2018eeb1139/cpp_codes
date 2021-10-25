class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> m;
        vector<int> vec;
        unordered_set<int>s1,s2,s3;
        for(int i=0;i<nums1.size();i++) s1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++) s2.insert(nums2[i]);
        for(int i=0;i<nums3.size();i++) s3.insert(nums3[i]);
        for(int i:s1) m[i]++;
        for(int i:s2) m[i]++;
        for(int i:s3) m[i]++;
        for(auto i:m){
            if(i.second>=2) vec.push_back(i.first);
        }
        return vec;
    }
};