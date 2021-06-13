int maxSubarraySum(int a[], int n){
        int max_sum=a[0];int curr_sum=a[0];
        for(int i=1;i<n;i++){
            curr_sum=max(curr_sum+a[i],a[i]);
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
} 