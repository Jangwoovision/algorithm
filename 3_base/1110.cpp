#include <iostream>
using namespace std;


int main(){
	int N;
	scanf("%d",&N);
	int temp=N;
	int i=0;
	while(1){
		int x=temp/10;
		int y=temp%10;
		int newN = x+y;
		temp = (y*10) + (newN%10);
		i++;
		if(temp==N){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
