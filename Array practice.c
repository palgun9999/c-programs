#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=1;i<=5;i++)
	{
		printf("\nEnter element number %d",i);
		scanf("%d",&a[i]);
	}
	for(i=5;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}