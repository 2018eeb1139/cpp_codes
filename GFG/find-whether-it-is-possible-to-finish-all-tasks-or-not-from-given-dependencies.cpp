#include <bits/stdc++.h>
using namespace std;


bool dfs(int node,vector<int> &vis,vector<int> &ord,vector<int> adj[]){
	vis[node]=1;
	ord[node]=1;
	for(int child:adj[node]){
		if(vis[child]==0){
			if(dfs(child,vis,ord,adj)==true) return true;
		}
	}
	ord[node]=0;
	return false;
}

bool canFinish(vector<pair<int,int>> &prerequisites,int n){
	vector<int> adj[n+1];
	vector<int> vis(n+1,0);
	vector<int> ord(n+1,0);
	for(int i=0;i<n;i++){
		adj[prerequisites[i].second].push_back(prerequisites[i].first);
	}
	if(dfs(prerequisites[0].second),vis,ord,adj) return true;
	return false;
}


int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> prerequisites;
	prerequisites.push_back(make_pair(1, 0));
    prerequisites.push_back(make_pair(2, 1));
    prerequisites.push_back(make_pair(3, 2));
    if(canFinish(prerequisites)) cout<<"Possible to finish all the tasks\n";
    else cout<<"Impossible to finish all the task\n";
}
