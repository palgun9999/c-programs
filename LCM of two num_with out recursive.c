#include<stdio.h>
int main()
{
    int i,m,n,lcm,gcd;
    printf("Enter the numbers to find the lcm:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        gcd=i;
    }
    lcm=(m*n)/gcd;
    printf("the LCM is %d",lcm);
    return 0;
}