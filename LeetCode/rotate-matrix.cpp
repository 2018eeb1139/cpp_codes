class Solution {
public:
    void reverse_columns(vector<vector<int>> &v){
        int n=v.size();
        int m=v[0].size();
        for(int j=0;j<m;j++){
            for(int i=0;i<n/2;i++){
                swap(v[i][j],v[n-1-i][j]);
            }
        }
    }
    
    void transpose(vector<vector<int>> &v){
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>> w=v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=w[j][i];
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        reverse_columns(matrix);
        transpose(matrix);
    }
};