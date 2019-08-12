#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char input[100] = { 0, };
	int length, i, result = 0;
	scanf("%d", &length);
	scanf("%s", input);

	for (i = 0; i<length; i++)
		result += (input[i] - '0');

	printf("%d\n", result);

	return 0;
//	int a;
//	int sum=0;
//	char *ptr = new char[a];
//	scanf("%d", &a);
//	scanf("%s", ptr);
//	if(a<1 || a>100) return -1;
//	for(int i=0;i<a;i++){
//		sum+=ptr[i]-'0';
//	}
//	printf("%d", sum);
//	delete ptr;

//	return 0;
}
