class Solution {
public:
    int uniquePaths(int n, int m) {
        vector<vector<int>> v(n,vector<int> (m));
        for(int j=0;j<m;j++) v[n-1][j]=1;
        for(int i=0;i<n;i++) v[i][m-1]=1;
        for(int i=n-2;i>=0;i--){
            for(int j=m-2;j>=0;j--){
                v[i][j]=v[i+1][j]+v[i][j+1];
            }
        }
        return v[0][0];
    }
};