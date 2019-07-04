#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a;
	cin>>a;
	if(a>100000) return -1;
		
	for(int i=1;i<=a;i++) cout<<i<<"\n";
	return 0;
}
