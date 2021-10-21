int Solution::solve(vector<int> &A) {
    int n=A.size();
    unordered_map<int,int> m;
    int sum=0,maxlen=0;
    for(int i=0;i<n;i++){
        sum+=(A[i]==0)?-1:1;
        if(sum==1) maxlen=i+1;
        else if(m.find(sum)==m.end()) m[sum]=i;
        if(m.find(sum-1)!=m.end()){
            if(maxlen<i-m[sum-1]) maxlen=i-m[sum-1];
        }
    }
    return maxlen;
}
