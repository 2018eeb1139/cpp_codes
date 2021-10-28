class Solution {
  public:
    // Function to find the number of islands.
    
    void dfs(int i,int j,int n,int m,vector<vector<char>> &grid){
        if(i<0 or i>=n or j<0 or j>=m or grid[i][j]=='0') return;
        grid[i][j]='0';
        dfs(i+1,j,n,m,grid);
        dfs(i-1,j,n,m,grid);
        dfs(i,j+1,n,m,grid);
        dfs(i,j-1,n,m,grid);
        dfs(i+1,j+1,n,m,grid);
        dfs(i-1,j-1,n,m,grid);
        dfs(i+1,j-1,n,m,grid);
        dfs(i-1,j+1,n,m,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,n,m,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};