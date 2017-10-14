#include<stdio.h>
int main()
{
	int i,j,k,m1,m2,n2;
	printf("Enter rows and columns of first matrix\n");
	scanf("%d%d",&m1,&m2);
	printf("Enter columns of second matrix\n");
	scanf("%d",&n2);
	int m[m1][m2],n[m2][n2],c[m1][n2];
	printf("Enter first matrix\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m2;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n");
	printf("Enter Second matrix\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(k=0;k<m1;k++)
	{
		for(i=0;i<n2;i++)
		{
			c[k][i]=0;
			for(j=0;j<m2;j++)
			{
				c[k][i]=c[k][i]+n[j][i]*m[k][j];
			}
		}
	}
	printf("\n\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
