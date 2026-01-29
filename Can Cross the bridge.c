#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d",max(x,y,z));
	return 0;
}
int max(int x,int y,int z)
{
	return (z-y)/x;
}