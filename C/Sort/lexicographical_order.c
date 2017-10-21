//Lexicographical Order..

//Author :Mast Ram Sharma
//Date :17/10/19


#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    //num= No. Of Name Or Strings User Wnt To Enter..
    printf("Enter The Number Of Strings You Want To Enter :");
    scanf("%d",&num);
    char str[num][100],temp[100];
    //Input Of The Strings..
    printf("Enter %d Words :",num);
    for(int i=0 ;i<num ;i++)
    {
        printf("\n %d : ",i+1);
    scanf("%s[^\n]",str[i]);
    }
     //Sorting Of The String..
    for(int i=0 ;i<num-1 ;i++)
    {
        for(int j=i+1 ;j<num ;j++)
        {
            //Strcmp (To Compare Strings)
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
//Printing Of The String In Lexicographical Order..
    printf("\n\nLexicographical order....\n");
    for(int i=0;i<num ;i++)
    {
        printf("\n%d . %s ",i+1,str[i]);
    }
    printf("\n");
}