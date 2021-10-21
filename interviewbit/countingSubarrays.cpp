int Solution::solve(vector<int> &arr, int k) {
    int n=arr.size();
    int i=0,j=0,cnt=0,sum=arr[0];
    while(i<n and j<n){
        if(sum<k){
            j++;
            if(j>=i) cnt+=j-i;
            if(j<n) sum+=arr[j];
        }
        else{
            sum-=arr[i];
            i++;
        }
    }
    return cnt;
}
