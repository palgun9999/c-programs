#include<stdio.h>
void main()
{
	int a;
	float b;
	char ch;
	char str[101];
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a floating point value:\n");
	scanf("%f",&b);
	printf("Enter a charcater:\n");
	scanf("%c",&ch);
	printf("enter a string:\n");
	scanf("%s",&str);
	printf("%d\n%f\n\n%c\n%s",a,b,ch,str);
}
