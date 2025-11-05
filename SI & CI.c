#include<stdio.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter principal amount (p):");
	scanf("%f",&p);
	printf("enter time in year (t):");
	scanf("%f",&t);
	printf("enter rate in percent(r):");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("simple intrest is :%.3f\n",si);
	ci=p*(pow(1+r/100,t)-1);
	printf("compound intrest =%.3f",ci);
	return 0;
}
