#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a;
	int result=-1;
	int pack=0;
	cin>>a;
	if(a<3 || a>5000) return -1;
	while(a>=0){
		if(a%5==0){
			result = a/5+pack;
			break;
		}
		else{
			a-=3;
			pack++;
		}
	}
	printf("%d", result);	

	return 0;
}
