class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> res(n,"");
        map<int,int> tmp;
        for(int i=0;i<n;i++) tmp[score[i]]=i;
        int ranking=1;
        for(auto it=tmp.rbegin();it!=tmp.rend();it++){
            if(1==ranking) res[it->second]="Gold Medal";
            else if(2==ranking) res[it->second]="Silver Medal";
            else if(3==ranking) res[it->second]="Bronze Medal";  
            else res[it->second]=to_string(ranking);
            ranking++;
        }
        return res;
    }
};