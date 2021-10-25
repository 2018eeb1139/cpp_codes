int Solution::solve(vector<int> &a, int m) {
    int n=a.size();
    int cnt=0;
    int odd=0;
    int prefix[n+1]={0};
    for(int i=0;i<a.size();i++){
        prefix[odd]++;
        if(a[i]&1) odd++;
        if(odd>=m) cnt+=prefix[odd-m];
    }
    return cnt;
}
