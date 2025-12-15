#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("Enter the order of matrix:");
	scanf("%d %d",&m,&n);
	int r1[m][n],r2[m][n],r3[m][n];
	printf("Enter Matrix R1:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&r1[i][j]);
		}
	}
	printf("Enter Matrix R2:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&r2[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			r3[i][j]=0;
			for(k=0;k<n;k++)
			{
				r3[i][j]=r3[i][j]+r1[i][k]*r2[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",r3[i][j]);
		}
		printf("\n");
	}
	return 0;
}