#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a,b;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin >>a>>b;
	int result=0;
	for(int i=1;i<a;i++){
		result+=arr[i-1];
	}	
	result+=b;
	
	if(result % 7 == 1) printf("MON");
	else if(result % 7 == 2) printf("TUE");
	else if(result % 7 == 3) printf("WED");
	else if(result % 7 == 4) printf("THU");
	else if(result % 7 == 5) printf("FRI");
	else if(result % 7 == 6) printf("SAT");
	else if(result % 7 == 0) printf("SUN");
	
	return 0;
}
