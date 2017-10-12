#include<stdio.h>

int main()
{
    int a[10][10];
    int rows1,rows2,columns1,columns2;
a:
    printf("Enter number of rows and columns for 1st matrix: ");
    scanf("%d %d",&rows1,&columns1);
    int b[10][10];
    printf("Enter number of rows and columns for 2nd matrix: ");
    scanf("%d %d",&rows2,&columns2);
    if(rows2!=columns1)
    {
        printf("The value of columns in 1st matrix is different from value of columns in 2nd matrix which is inapproproate. Please try again.\n");
        goto a;
    }
    int x[10][10];
    int i,j,k,l,prod,sum;

    printf("Enter values of 1st matrix: \n");

    for(i=0;i<rows1;i++)
        for(j=0;j<columns1;j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter values of 2nd matrix: \n");
    
    for(i=0;i<rows2;i++)
        for(j=0;j<columns2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns2;j++)
        {
            sum = 0;
            for(k=0;k<rows2;k++)
            {
                prod = a[i][k] * b[k][j];
                sum += prod;
            }
            x[i][j]=sum;
        }
    }

    for(i=0;i<rows1;i++)
    {    
        for(j=0;j<columns2;j++)
            printf("%d\t",x[i][j]);
        printf("\n");
    }

    return 0;
}