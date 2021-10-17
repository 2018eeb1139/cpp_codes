int Solution::diffPossible(vector<int> &A, int B) {
    int i=0,j=0;
    while(i<A.size() and j<A.size()){
        if(A[j]-A[i]==B){
            if(i==j) j++;
            else return 1;
        }
        else if(A[j]-A[i]<B) j++;
        else if(A[j]-A[i]>B) i++;
    }
    return 0;
}
