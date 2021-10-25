#include <bits.stdc++.h>
using namespace std;

vector<int> minimumTime(vector<int> &in,vector<int> adj[],int n){
	vector<int> ans(n+1,0);
	queue<int> q;
	for(int i=0;i<n;i++){
		if(in[i]==0){
				q.push(i);
				ans[i]=1;
			}
		}
	while(!q.empty()){
		int curr=q.front();q.pop();
		for(int child:adj[curr]){
			in[child]--;
			if(in[child]==0){
				ans[child]=ans[curr]+1;
				q.push(child);
			}
		}
	}
	return ans;
}

int main()
{
	int n,e;
	cin>>n>>e;
	vector<int> adj[n+1];
	vector<int> in(n+1,0);
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		in[v]++;
	}
	minimumTime(in,adj,n);
}