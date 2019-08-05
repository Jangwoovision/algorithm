#include <iostream>
using namespace std;

int sumN(int n){
	if(n<=1) return 1;
	else return n+sumN(n-1);
}

int main(){
	ios::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	if(a<0 || b>10) return -1;
	
	printf("%d", a+b);	
	
	return 0;
}
