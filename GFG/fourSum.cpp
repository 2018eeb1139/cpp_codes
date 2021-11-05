bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    bool ans=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int st=j+1;
            int end=n-1;
            while(st<end){
                int sum=A[i]+A[j]+A[st]+A[end];
                if(sum>X){
                    end--;
                }else if(sum<X){
                    st++;
                }else if(sum==X){
                    return true;
                    ans=1;
                }
            }
            if(ans==1){
                break;
            }
        }
    }
    return false;