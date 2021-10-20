int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> m;
    int cnt=0,Xor=0;
    for(auto it:A){
        Xor=Xor^it;
        if(Xor==B) cnt++;
        if(m.find(Xor^B)!=m.end()) cnt+=m[Xor^B];
        m[Xor]+=1;
    }
    return cnt;
}
