#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+10;
const int mod=1e9+7;

int f=0;

void dfs(int node,int par,int col,vector<int> &vis,vector<int> adj[]) {
    vis[node]=col;
    for(int child:adj[node]){
        if(vis[child]==0) {
            dfs(child,node,3-col,vis,adj);
        }
        else if(child!=par and vis[child]==col){
            f=1;
            break;
        }
    }
}

int main()
{
    int v,e;cin>>v>>e;
    vector<int> adj[v+1];
    vector<int> vis(v+1,0);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,1,vis,adj);
    if(f==1) cout<<"Not Bipartite\n";
    else cout<<"Bipartie\n";
}