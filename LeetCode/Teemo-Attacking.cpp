class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int totalTime=0;
        if(duration==0) return 0;
        for(int i=0;i<timeSeries.size()-1;i++){
            totalTime+=min(timeSeries[i+1]-timeSeries[i],duration);
        }
        return totalTime+duration;
    }
};