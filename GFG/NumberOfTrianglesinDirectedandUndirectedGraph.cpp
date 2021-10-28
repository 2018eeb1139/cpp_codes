#include <bits/stdc++.h>
using namespace std;
#define V 4

int countTriangle(int graph[V][V],bool isDirected){
	int cnt=0;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			for(int k=0;k<V;k++){
				if(graph[i][j] and graph[j][k] and graph[k][i]) cnt++;
			}
		}
	}
	isDirected?(cnt=cnt/3):(cnt=cnt/6);
	return cnt;
}

int main()
{
	int graph[][V] = { {0, 1, 1, 0},
                       {1, 0, 1, 1},
                       {1, 1, 0, 1},
                       {0, 1, 1, 0}
                     };
    int digraph[][V] = { {0, 0, 1, 0},
                        {1, 0, 0, 1},
                        {0, 1, 0, 0},
                        {0, 0, 1, 0}
                       };
    cout<<countTriangle(graph,false);
    cout<<"\n"<<countTriangle(digraph,true);
}