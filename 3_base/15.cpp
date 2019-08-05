#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	
	for(int i=0; i<a; i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}		
		printf("\n");
	}
	return 0;
}
