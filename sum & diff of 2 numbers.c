#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	printf("Enter any two values:");
	scanf("%d%d",&a,&b);
	printf("Enter any two values:");
	scanf("%f%f",&c,&d);
	printf("\nsum of a,b:%d",a+b);
	printf("\nsum of c,d:%f",c+d);
	printf("\nDiffernce of a,b:%d",a-b);
	printf("\ndiffernce of c,d:%f",c-d);
	return 0;
}
