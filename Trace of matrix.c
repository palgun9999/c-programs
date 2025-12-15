#include<stdio.h>
int main()
{
	int r1[10][10],i,j,trace=0;
	printf("Enter the elements of Matrix R1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&r1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
				trace=trace+r1[i][j];
			}
		}
	}
	printf("Trace=%d",trace);
	return 0;
}