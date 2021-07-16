class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        set<int> s1,s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(s1.find(nums2[i])!=s1.end()) s2.insert(nums2[i]);
        }
        for(auto it=s2.begin();it!=s2.end();it++) result.push_back(*it);
        return result;
    }
};