int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    vector<int> start(n);
    vector<int> endd(n);
    for(int i=0;i<n;i++){
        start[i]=A[i][0];
        endd[i]=A[i][1];
    }
    sort(start.begin(),start.end());
    sort(endd.begin(),endd.end());
    int i=0,j=0,ans=0,rooms=0;
    while(i<n and j<n){
        if(start[i]<endd[j]) {rooms++;i++;}
        else {rooms--;j++;}
        ans=max(ans,rooms);
    }
    return ans;
}
