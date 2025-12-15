#include<stdio.h>
int main()
{
	int *p=NULL;
	int a=10,b=20;
	int *p1,*p2;
	printf("a=%d,&a=%d \n",a,&a);
	printf("b=%d,&b=%d \n",b,&b);
	p1=&a;
	printf("\np1 is %u",*p1);
	printf("\n p1+1 is %u",*p1+1);
	p2=&b;
	printf("\n p2 is %u",*p2);
	printf("\n p2+1 is %u",*p2+1);
	return 0;
}