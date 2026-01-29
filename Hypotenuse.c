#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=hyp(x,y);
	printf("%d",z);
	return 0;
}
int hyp(int x,int y)
{
	int a=sqrt(x*x+y*y);
	return a;
}