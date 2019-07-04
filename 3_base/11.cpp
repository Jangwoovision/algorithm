#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a,b,c;
	cin>>a>>b>>c;
	if(a<2 || b>100000 || c>100000) return -1;
	
	cout << (a+b)%c<<"\n";
	cout << ((a%c)+(b%c))%c<<"\n";
	cout << (a*b)%c<<"\n";
	cout << ((a%c)*(b%c))%c<<"\n";
	
	return 0;
}
