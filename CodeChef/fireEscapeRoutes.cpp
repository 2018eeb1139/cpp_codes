#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
ll const mod=1e9+7;

vector<int> arr[N];
int vis[N];
int cc_size;

void dfs(int node){
    vis[node]=1;
    cc_size++;
    for(int child:arr[node]){
        if(vis[child]==0) dfs(child);
    }
}

int main()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            vis[i]=0;arr[i].clear();
        }
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        int cc_cnt=0;
        ll res=1;
        for(int i=1;i<=n;i++){
            cc_size=0;
            if(vis[i]==0) {
                dfs(i);cc_cnt++;
                // cout<<cc_size<<endl;
                res=(res*cc_size)%mod;
                }
            
        }
        cout<<cc_cnt<<" "<<res<<endl;
    }
}