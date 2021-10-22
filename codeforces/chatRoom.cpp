#include <bits/stdc++.h>
using namespace std;
 
int t[100][101];
 
int lcs(string s1,string s2){
    int m=s1.size(),n=s2.size();
    for(int i=0;i<=n;i++) t[0][i]=0;
    for(int i=0;i<=m;i++) t[i][0]=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1];
            else t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[m][n];
}
 
int main()
{
    string s;cin>>s;
    if(lcs("hello",s)==5) cout<<"YES";
    else cout<<"NO";
}
