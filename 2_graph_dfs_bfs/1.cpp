#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//������� 
bool a[2000][2000];
//���� ����Ʈ 
//13023
vector<int> g[2000];
//���� 
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
	printf("�������\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("��������Ʈ\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<g[i].size();j++){
			printf("%d ", g[i][j]);
		}
		printf("\n");
	}
	
	m*=2;	
	printf("����\n");
	for(int i=0;i<m;i++){
		printf("%d %d\n", edges[i].first, edges[i].second); 	
	}
	
}
