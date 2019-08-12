#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a[101];
	int cnt=0;
	int i=0;
	scanf("%s", &a);
	//printf("%s", a);
	while(cnt<strlen(a)){
		printf("%c", a[i]);
		i++;
		cnt++;
		if(cnt%10==0) puts("");
	}
	//printf("%d", strlen(a));
	return 0;
}
