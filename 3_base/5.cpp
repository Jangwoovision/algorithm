#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a;
	cin>>a;
	if(a>=1 && a>=100) return -1;
		
	for(int i=0;i<a;i++) {
		for(int j=0;j<i;j++) cout<<"*";
		cout<<"\n";
	}
		
	return 0;
}
