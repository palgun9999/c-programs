#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Order of matrix:");
	scanf("%d %d",&m,&n);
	int A[m][n],B[m][n],C[m][n];
	printf("Elements of matrix A");
	for(i=0;i<4;i++)
	{
		for(j=0;i<4;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Elements of matrix B");
	for(i=0;i<n;i++)
	{
		for(j=0;i<m;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}