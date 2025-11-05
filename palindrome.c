#include<stdio.h>
int main()
{
	int num,rn=0,tnum,rem;
	printf("Enter an Integer:");
	scanf("%d",&num);
	tnum=num;
	{
		rem=num%10;
		rn = rn*10+rem;
		tnum /= 10;
	}
	if(num==rn)
	{
		printf("%d is a palindrome.\n",num);
	}
	else
	{
		printf("%d in not a palindrome");
	}
	return 0;
}