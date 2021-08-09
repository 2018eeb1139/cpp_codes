class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> altitude(n+1);
        altitude.push_back(0);
        for(int i=1;i<n+1;i++) altitude[i]=gain[i-1]+altitude[i-1];
        return *max_element(altitude.begin(),altitude.end());
    }
};