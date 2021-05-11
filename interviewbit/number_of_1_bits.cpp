int Solution::numSetBits(unsigned int A) {
    int t=0;
    while(A){
        if(A&1) t++;
        A>>=1;
    }
    return t;
}

