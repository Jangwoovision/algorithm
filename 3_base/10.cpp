#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a;
	cin>>a;
	if(a<1 || a>100) return -1;
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(a-i<j) cout<<"*";
			else cout<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
