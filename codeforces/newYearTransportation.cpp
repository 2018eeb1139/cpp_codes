#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n+1);
    for(int i=1;i<=n-1;i++){
        cin>>v[i];
    }
    vector<ll> vis(n+1,0);
    vis[1]=1;
    int temp=1+v[1];
    while(temp<=n-1){
        vis[temp]=1;
        temp=temp+v[temp];
    }
    if(t>n-1) cout<<"YES";
    else if(vis[t]){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}