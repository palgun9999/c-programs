#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("\n Before swap a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\n After swap a=%d,b=%d",a,b);
}
void swap(int *a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("\n Inside swap() function a=%d,b=%d",*a,*b);
}