{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int t[201][201];
    int solve(int n,int f){
        if(n==1) return f;
        if(f==1 || f==0) return f;
        
        if(t[n][f]!=-1) return t[n][f];
        
        int ans = INT_MAX;
        for(int i=1;i<=f;i++){
            int temp = 1+ max(solve(n-1,i-1),solve(n,f-i));
            ans = min(ans,temp);
        }
        return t[n][f] = ans;
    }
    int eggDrop(int n, int k) 
    {
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }
};