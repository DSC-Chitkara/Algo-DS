#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,loc,mid,beg,end,n,flag=0,item;
    printf("how many elements");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&item);
    loc=0;
    beg=0;
    end=n-1;
    while((beg<=end) && (item!=a[mid]))
    {
        mid=((beg+end)/2);
        if(item==a[mid])
        {
            printf("search is sucessfull\n");
            loc=mid;
            printf("posistion of the item %d\n",loc+1);
            flag=flag+1;
        }
        else if(item<a[mid])
        end=mid-1;
        else
        beg=mid+1;
    }
    if(flag==0)
    {
        printf("search is sucessfull");
    }
    getch();
}