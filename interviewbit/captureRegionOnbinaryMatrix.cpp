int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isValid(int i,int j,int n,int m,vector<vector<char>> &A){
    if(i<0 or i>=n or j<0 or j>=m or A[i][j]=='X' || A[i][j]=='^') return false;
    return true;
}

void bfs(queue<pair<int,int>> &q,int n,int m,vector<vector<char>> &A){
    while(!q.empty()){
        int curr_x=q.front().first;
        int curr_y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            if(isValid(curr_x+dx[i],curr_y+dy[i],n,m,A)){
                int newx=curr_x+dx[i];
                int newy=curr_y+dy[i];
                A[newx][newy]='^';
                q.push({newx,newy});
            }
        }
    }
}

void Solution::solve(vector<vector<char> > &A) {
    int n=A.size();
    int m=A[0].size();
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='O' and (i==0 or j==0 or i==n-1 or j==m-1)){
                // cout<<"oK ";
                q.push({i,j});
                A[i][j]='^';
            }
        }
    }
    // cout<<q.size()<<" ";
    bfs(q,n,m,A);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='O') A[i][j]='X';
            else if(A[i][j]=='^') A[i][j]='O';
        }
    }
}
