#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//인접행렬 
bool a[2000][2000];
//인접 리스트 
//13023
vector<int> g[2000];
//간선 
vector<pair<int,int> > edges;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int from, to;
		cin>>from>>to;
		edges.push_back({from, to});
		edges.push_back({to, from});
		a[from][to]=a[to][from]=true;
		g[from].push_back(to);
		g[to].push_back(from);
	}
	printf("인접행렬\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("인접리스트\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<g[i].size();j++){
			printf("%d ", g[i][j]);
		}
		printf("\n");
	}
	
	m*=2;	
	printf("간선\n");
	for(int i=0;i<m;i++){
		printf("%d %d\n", edges[i].first, edges[i].second); 	
	}
	
}
