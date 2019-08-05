#include <iostream>
using namespace std;

#define NUMBER 3

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<1 || b>100 || c>100) return -1;
	int arr[3]={0,};
	int temp;
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	
	for(int i=0;i<NUMBER;i++){
		for(int j=i+1;j<NUMBER;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("%d", arr[1]);
	
	
	return 0;
}
