int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isValid(int i,int j,int idx,int n,int m,string target,vector<string> &A){
    if(i>=0 and i<n and j>=0 and j<=m and A[i][j]==target[idx]) return true;
    return false;
}

bool dfs(int x,int y,int idx,int n,int m,string target,vector<string> &A){
    if(idx==target.size()-1) return true;
    idx++;
    for(int i=0;i<4;i++){
        int newx=x+dx[i];
        int newy=y+dy[i];
        if(isValid(newx,newy,idx,n,m,target,A)){
            if(dfs(newx,newy,idx,n,m,target,A)) return true;
        }
    }
    return false;
}

int Solution::exist(vector<string> &A, string target) {
    if(target=="") return 1;
    int n=A.size();
    int m=A[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==target[0]){
                if(dfs(i,j,0,n,m,target,A)) return 1;
            }
        }
    }
    return 0;
}
