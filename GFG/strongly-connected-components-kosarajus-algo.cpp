class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int node,vector<int> &vis,vector<int> &ord,vector<int> adj[]){
	    vis[node]=1;
	    for(int child:adj[node]){
	        if(vis[child]==0) dfs(child,vis,ord,adj);
	    }
	    ord.push_back(node);
	}
	
	void dfs1(int node,vector<int> &vis,vector<int> adj[]){
	    vis[node]=1;
	    for(int child:adj[node]){
	        if(vis[child]==0) dfs1(child,vis,adj);
	    }
	   // ord.push_back(node);
	}
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int> revAdj[V];
        for(int i=0;i<V;i++){
            for(int j:adj[i]){
                revAdj[j].push_back(i);
            }
        }
        vector<int> ord;
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0) dfs(i,vis,ord,adj);
        }
        for(int i=0;i<V;i++) vis[i]=0;
        // for(int i=0;i<V;i++) cout<<ord[i]<<" ";
        int cnt=0;
        
        for(int i=V-1;i>=0;i--){
            if(vis[ord[i]]==0)
            {
                dfs1(ord[i],vis,revAdj);
                cnt++;
            }
            
        }
        return cnt;
    }
};