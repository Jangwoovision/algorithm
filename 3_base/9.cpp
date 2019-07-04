#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	double a, b;
	cin>>a >>b;
	if(a<=0|| b>=10) return -1;
	cout<<fixed;         //소수점 고정
	cout.precision(9);
	cout<<(a/b);
	
	return 0;
}
