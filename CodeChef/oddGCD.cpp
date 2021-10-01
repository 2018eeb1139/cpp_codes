#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int cnt=0;
            if((a[i]%2)==0){
                while(a[i]){
                        a[i]=a[i]/2;
                        cnt++;
                        if(a[i]%2==1) break;
                }
                ans=min(ans,cnt);
            }
            else {ans=0;break;}
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
}