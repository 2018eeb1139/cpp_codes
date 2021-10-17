int t[501][501];
class Solution{
public:
    bool isPalindrome(string s,int i,int j){
        if(i==j) return true;
        if(i>j) return true;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int solve(string s,int i,int j){
        if(i>=j) return 0;
        if(isPalindrome(s,i,j)) return 0;
        if(t[i][j]!=-1) return t[i][j];
        int mn=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int left,right;
            if(t[i][k]!=-1) left=t[i][k];
            else{
                left=solve(s,i,k);
                t[i][k]=left;
            }
            if(t[k+1][j]!=-1) right=t[k+1][j];
            else{
                right=solve(s,k+1,j);
                t[k+1][j]=right;
            }
            int temp=left+right+1;
            mn=min(mn,temp);
        }
        t[i][j]=mn;
        return mn;
        
    }
    int palindromicPartition(string str)
    {
        int n=str.size();
        memset(t,-1,sizeof(t));
        return solve(str,0,n-1);
    }
};