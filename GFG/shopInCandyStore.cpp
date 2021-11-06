vector<int> candyStore(int a[], int n, int k)
    {
        // Write Your Code here
        int mn=0,mx=0;
        sort(a,a+n);
        int i=0,j=n-1;
        while(i<=j){
            mn+=a[i];
            i++;
            j=j-k;
        }
        i=0;j=n-1;
        reverse(a,a+n);
        while(i<=j){
            mx+=a[i];
            i++;
            j=j-k;
        }
        return {mn,mx};
    }