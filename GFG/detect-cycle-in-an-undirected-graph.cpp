class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int node,int par,vector<int> adj[],vector<int> &vis){
    vis[node]=1;
    for(int child:adj[node]){
        if(vis[child]==0) {
            if(dfs(child,node,adj,vis)==true) return true;
        }
        else if(child!=par) return true;
    }
    return false;
}
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0) {
                bool f=dfs(i,-1,adj,vis);
                if(f) return true;
            }
        }
        return false;
    }
};