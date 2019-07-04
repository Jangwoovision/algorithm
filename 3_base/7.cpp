#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a, b;
	cin>>a>>b;
	if(a<1 || b>10) return -1;
		
	for(int i=1;i<10;i++) cout<<a<<" * "<<i<<" = "<<a*i<<"\n";
		
	return 0;
}
