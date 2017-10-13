#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,l;
	double prod,sum;
a:
    printf("Enter number of rows for 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter number of columns for 1st matrix : ");
    scanf("%d",&c1);
    double** a =(double**)malloc(sizeof(double*)*r1);
    for(i=0;i<r1;i++)
    	a[i] = malloc(sizeof(double)*c1);
    printf("Enter number of rows for 2nd matrix : ");
    scanf("%d",&r2);
	printf("Enter number of columns for 2nd matrix : ");
    scanf("%d",&c2);
    double** b =(double**)malloc(sizeof(double*)*r1);
    for(i=0;i<r2;i++)
    	b[i] = malloc(sizeof(double)*c2);
    
    if(r2!=c1)
    {
        printf("The value of columns in 1st matrix is different from value of columns in 2nd matrix which is inapproproate. Please try again.\n");
        goto a;
    }
    double** x = (double**)malloc(sizeof(double*)*r1);
    for(i=0;i<r1;i++)
    	x[i] = malloc(sizeof(double)*c2);

    printf("Enter values of 1st matrix: \n");

    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%lf", *(a+i)+j);
    
    printf("Enter values of 2nd matrix: \n");
    
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%lf", *(b+i)+j);

    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            sum = 0;
            for(k=0;k<r2;k++)
            {
                prod = a[i][k] * b[k][j];
                sum += prod;
            }
            *(*(x+i)+j)=sum;
        }

    for(i=0;i<r1;i++)
    {    
        for(j=0;j<c2;j++)
            printf("%.3lf\t",*(*(x+i)+j));
        printf("\n");
    }

    return 0;
}
