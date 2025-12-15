#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the order of matrix:");
	scanf("%d %d",&m,&n);
	int r[m][n];
	printf("Enter the elements of matrix r1:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&r[i][j]);
		}
	}
	printf("Original matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix R1:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",r[j][i]);
		}
		printf("\n");
	}
	return 0;
}