class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        int t[a+1][b+1];
        for(int i=0;i<=b;i++) t[0][i]=1;
        for(int j=0;j<=a;j++) t[j][0]=1;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        }
        return t[a-1][b-1];
    }
};