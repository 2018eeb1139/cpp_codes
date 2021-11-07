#include <bits/stdc++.h>
using namespace std;

void printCommonElement(vector<vector<int>> &v){
	int n=v.size();
	int m=v[0].size();
	unordered_map<int,int> mp;
	for(int i=0;i<m;i++) mp[v[0][i]]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[v[i][j]]==i){
                mp[v[i][j]]=i+1;
            }
            if(i==n-1 and mp[v[i][j]]==n) cout<<v[i][j]<<" ";
		}
	}
}

int main()
{
	vector<vector<int>> v={
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    printCommonElement(v);
}