#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a;
	while(1){
		cin >> a;	
		if(a>=0 && a<=100) break;
		else printf("다시 입력하십쇼\n");
	}
	
	if(a>=90 && a<=100) printf("A");
	else if(a>=80 && a<90) printf("B");
	else if(a>=70 && a<80) printf("C");
	else if(a>=60 && a<70) printf("D");
	else printf("F");
	
	return 0;
}
