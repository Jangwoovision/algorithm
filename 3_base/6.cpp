#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a, b;
	cin>>a>>b;
	if(a<0 || b>10) return -1;
		
	cout<<a*b<<"\n";
		
	return 0;
}
