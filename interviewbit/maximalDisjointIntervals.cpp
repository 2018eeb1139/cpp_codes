bool cmp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}

int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end(),cmp);
    int r1=A[0][1];
    int cnt=1;
    for(int i=1;i<A.size();i++){
        int l1=A[i][0];
        int r2=A[i][1];
        if(l1>r1) {cnt++;r1=r2;}
    }
    return cnt;
}
