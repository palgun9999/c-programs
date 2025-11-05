 #include<stdio.h>
int main()
{
	double num,root;
	printf("Enter an integer:");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("The square root of%.2lf is %.2lf",num,root);
	return 0;
}
