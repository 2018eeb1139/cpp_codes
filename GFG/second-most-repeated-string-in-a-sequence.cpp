class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int fmx=INT_MIN;
        int smx=INT_MIN;
        unordered_map<string,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]+=1;
        }
        for(auto it:m){
            if(it.second>fmx) fmx=it.second;
        }
        string res="";
        for(auto it:m){
            if(it.second!=fmx and it.second>smx){
                smx=it.second;
                res=it.first;
            }
        }
        return res;
    }
};