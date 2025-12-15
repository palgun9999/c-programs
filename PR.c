#include<stdio.h>
int main()
{
	static int a=10;
	{
		a=9;
		printf("\n%d",a);
	}
	printf("\n%d",a);
	return 0;
}