int Solution::threeSumClosest(vector<int> &a, int B) {
    int n=a.size();
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    for(int i=0;i<n;i++){
        int j=i+1,k=n-1;
        while(j<k){
            long long sum=a[i]+a[j]+a[k];
            if(abs(sum-B)<abs(ans-B)) ans=sum;
            if(sum<B) j++;
            else k--;
        }
    }
    return ans;
}
