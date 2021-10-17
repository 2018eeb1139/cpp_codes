int t[101][101];
class Solution{
public:
    int solve(int a[],int i,int j){
        if(i>=j) return 0;
        if(t[i][j]!=-1) return t[i][j];
        int min=INT_MAX;
        int temp;
        for(int k=i;k<j;k++){
            temp=solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
            if(temp<min) min=temp;
            }
            t[i][j]=min;
        return min;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        int i=1,j=N-1;
        memset(t,-1,sizeof(t));
        return solve(arr,i,j);
    }
};