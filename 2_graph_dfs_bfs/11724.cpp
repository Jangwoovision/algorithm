#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <queue>
using namespace std;

bool check[1001];
vector<int> a[1001];
int connectComponent=0;

void bfs(int start){
	queue<int> q;
	check[start]=true;
	q.push(start);
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(int i=0;i<a[node].size();i++){
			int next = a[node][i];
			if(check[next]==false){
				check[next]=true;
				q.push(next);
			}
		}
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	memset(check,false,sizeof(check));
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			bfs(i);
			connectComponent++;
		}
	}
	printf("%d",connectComponent);
	return 0;
}
