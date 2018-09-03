 #include<stdio.h>

int main()
{
	int k,i,j,a,b,c,d,sum=0;
	
	printf("Enter Size Of 1st 2D array\n");
	scanf("%d %d",&a,&b);
	
	int arr[a][b];
	printf("Enter Elements Of 1st 2D array\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Size Of 1st 2D array\n");
	scanf("%d %d",&c,&d);
	
	int arr1[c][d];
	printf("Enter Elements Of 2nd 2D array\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	if(b==c)
	{
		int arr2[a][d];
		
		for(k=0;k<a;k++)
		{
			for(i=0;i<d;i++)
			{
				for(j=0;j<c;j++)
				{
					sum=sum+(arr[k][j]*arr1[j][i]);
				}
				arr2[k][i]=sum;
				sum=0;
			}
		}
	
		printf("After Multiplication\n");
	
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d ",arr2[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Multiplication Can't Be performed'");
	}
	
	return 0;
}
