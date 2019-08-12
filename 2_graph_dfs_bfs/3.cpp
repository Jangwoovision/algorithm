//간선리스트로 구현
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <memory.h>
using namespace std;
bool check[1001];
struct Edge {
    int from, to;
};
Edge edge[20001];
int cnt[1001];

bool cmp(const Edge &u, const Edge &v){
	if(u.from == v.from){
		return u.to<v.to;
	}
	else{
		return u.from<v.from;
	}
}

void dfs(int node){
	check[node]=true;
	printf("%d ",node);
	for(int i=cnt[node-1];i<cnt[node];i++){
		int next = edge[i].to;
		if(check[next]==false){
			check[next]=true;
			dfs(next);
		}
	}
}

void bfs(int start){
	queue<int> q;
	check[start]=true;
	q.push(start);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		printf("%d ",node);
		for(int i=cnt[node-1];i<cnt[node];i++){
			int next=edge[i].to;
			if(check[next]==false){
				check[next]=true;
				q.push(next);
			}
		}
	}
}

int main(){
	int n,m,start;
	scanf("%d %d %d", &n,&m,&start);
	for(int i=0;i<m;i++){
		scanf("%d %d",&edge[i].from, &edge[i].to);
        edge[i+m].from = edge[i].to;
        edge[i+m].to = edge[i].from;
	}
	m*=2;
	sort(edge,edge+m,cmp);
	printf("간선정보\n");
	for(int i=0;i<m;i++){
		printf("%d ",edge[i].from);
		printf("%d ",edge[i].to);
		puts("");
	}
	
	for (int i=0; i<m; i++) {
        cnt[edge[i].from] += 1;
    }
    for (int i=1; i<=n; i++) {
        cnt[i] += cnt[i-1];
    }
    puts("");
    dfs(start);
    printf("\n");
    memset(check,false,sizeof(check));
    bfs(start);
    printf("\n");
	return 0;
}

