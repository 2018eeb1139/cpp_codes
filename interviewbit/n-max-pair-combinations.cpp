vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int N=A.size();
    priority_queue<int,vector<int>,greater<int>> pq;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int sum=A[i]+B[j];
            if(pq.size()<N) pq.push(sum);
            else if(pq.top()<sum) {
                pq.pop();pq.push(sum);
            }
            else break;
        }
    }
    vector<int> res(N);
    for(int i=N-1;i>=0;i--) {res[i]=pq.top();pq.pop();}
    return res;
}
