const int M=1e9+7;
int Solution::solve(string A) {
    int v=0,c=0,sum=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='a' or A[i]=='e' or A[i]=='i' or A[i]=='o' or A[i]=='u'){
            v+=1;
            sum+=c;
        }
        else{
            c+=1;
            sum+=v;
        }
    }
    return sum%M;
}
