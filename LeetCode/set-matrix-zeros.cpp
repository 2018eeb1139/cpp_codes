class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<pair<int,int>> p;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    p.push_back({i,j});
                }
            }
        }
        for(auto i:p){
            int idx_x=i.first;
            int idx_y=i.second;
            for(int j=0;j<m;j++) matrix[idx_x][j]=0;
            for(int i=0;i<n;i++) matrix[i][idx_y]=0;
        }  
    }
};