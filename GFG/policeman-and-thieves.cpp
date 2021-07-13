class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int res=0;
        vector<int> police;
        vector<int> thief;
        for(int i=0;i<n;i++){
            if(arr[i]=='P') police.push_back(i);
        }
        for(int i=0;i<n;i++){
            if(arr[i]=='T') thief.push_back(i);
        }
        int l=0,r=0;
        while(r<police.size() && l<thief.size()){
            if(abs(police[r]-thief[l])<=k) {l++;r++;res++;}
            else if(police[r]>thief[l]) l++;
            else r++;
        }
        return res;
    }
};