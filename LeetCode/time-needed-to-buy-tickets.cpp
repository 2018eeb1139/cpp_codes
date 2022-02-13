class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size(); 
        int t=0;
        while(tickets[k]>0)
        for(int i=0;i<n;i++){
            if(tickets[i]>0) {tickets[i]--;t++;}
            if(tickets[k]==0) return t;
        }
        return t;
    }
};