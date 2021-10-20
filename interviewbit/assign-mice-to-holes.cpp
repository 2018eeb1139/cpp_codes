int Solution::mice(vector<int> &mice, vector<int> &holes) {
    int m=mice.size();
    int n=holes.size();
    if(m!=n) return -1;
    sort(mice.begin(),mice.end());
    sort(holes.begin(),holes.end());
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,abs(mice[i]-holes[i]));
    }
    return mx;
}
