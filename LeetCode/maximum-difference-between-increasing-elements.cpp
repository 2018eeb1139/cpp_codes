class Solution {
public:
    int maximumDifference(vector<int>& prices) {
         int maxPro=0;
         int minPrice=INT_MAX;
         for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        if(maxPro==0) return -1;
        return maxPro;
    }
};