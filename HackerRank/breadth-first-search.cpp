#include <bits/stdc++.h>

using namespace std;

vector<int> arr[10001];
int vis[10001], dis[10001];

void bfs(int src){
	queue<int> q;
	q.push(src);
	vis[src]=1;
	dis[src]=0;
	while(!q.empty()){
		int curr=q.front();q.pop();
		for(int child:arr[curr]){
			if(vis[child]==0){
				q.push(child);
				vis[child]=1;
				dis[child]=1+dis[curr];
			}
		}
	}
}


int main()
{
	int t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++) {arr[i].clear();vis[i]=0;}
		for(int i=1;i<=m;i++){
			int a,b;
			cin>>a>>b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		bfs(1);
		cout<<dis[n]<<endl;
	}
}