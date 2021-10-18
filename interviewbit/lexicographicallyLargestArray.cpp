vectorint Solutionsolve(vectorint &A) {
    vectorint v;
    int n=A.size(),i;
    for(i=0;in;i++){
        if(A[i]A[n-1]) break;
    }
    reverse(A.begin()+i,A.end());
    return A;
}