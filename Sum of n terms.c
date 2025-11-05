#include<stdio.h>
int main()
{
	int n, result;
	printf("Enter the nth term:");
	scanf("%d",&n);
	result=n*(n+1)/2;
	printf("%d",result);
	return 0;
}