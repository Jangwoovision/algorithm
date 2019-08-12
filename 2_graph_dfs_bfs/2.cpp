//1260
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
bool check[1001];
vector<int> a[1001];

void dfs(int node){
	check[node] = true;
	printf("%d ",node);
	for(int i=0;i<a[node].size();i++){
		int next = a[node][i];
		if(check[next]==false){
			dfs(next);
		}
	}
}

void dfs(int start){
	queue<int> q;
	memset(check, false, sizeof(check));
	q.push(start);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		printf("%d ", node);
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
	//n: Á¤Á¡ÀÇ °¹¼ö, m: °£¼±ÀÇ °¹¼ö, start: Å½»ö ½ÃÀÛ Á¤Á¡ 
	int n,m,start;
	scanf("%d %d %d", &n,&m,&start);
	for(int i=0;i<m;i++){
		int u, v;
		scanf("%d %d", &u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	} 
	for(int i=1;i<=n;i++){
		sort(a[i].begin(), a[i].end());
	}
	dfs(start);
	puts("");
	
	return 0;
}
