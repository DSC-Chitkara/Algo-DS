#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,k,i,j,temp;
    printf("how many elements");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(k=1;k<=n-1;k++)
    {
        temp=a[k];
        j=k-1;
        while((temp<a[j]) && (j>=0))
        {
            a[j+1]= a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("elements of array after sorting are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();

}