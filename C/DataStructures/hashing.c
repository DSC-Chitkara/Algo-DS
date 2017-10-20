#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//printf("EXE\t");
typedef struct node{
    char value[51];
    struct node *next;
} node;

node *table[101];

/* Generate the hash code*/
int hashfunction(char *a){
    int i=1;
    long long int result=a[0]*31;
    while((int)a[i]!='\0'){
        result=result*31+(int)a[i];
        result%=100;
        i++;
    }
    //printf("%lld\t",result);
    return (int)result;
}
void insert(int has, char *s){
    node *newNode=(struct node*)malloc(sizeof(struct node));
    strcpy(newNode->value,s);
    if(table[has]==NULL){
        newNode->next=NULL;
        table[has]=newNode;
        return;
    }
    else{
        newNode->next=table[has];
        table[has]=newNode;
        return;
    }
}

int search(char *a,int k)
{
    node *travel= table[k];
    if(table[k]==NULL)
    {
        return 0;
    }
    while(1){
        if(!(strcmp(a,travel->value)))
        return 1;

        travel=travel->next;
        if(travel==NULL)
        {
            return 0;
        }

    }
}
void printfreq()
{
    int cnt,i;
    for(i=1;i<=100;i++)
    {
        cnt=0;
        node *p=table[i];
        while(p!=NULL)
        {
            cnt++;
            p=p->next;
        }
        printf("clsn freq at %d is %d\n",i,cnt);
    }
}


int main(){
    FILE *fp;
    fp=fopen("dictionary.txt","r");
    if(fp==NULL){
        printf("File does not exist\n");
        return 0;
    }
    int i,ha;
    char str[51];
    for(i=0;i<=100;i++){
        table[i]=NULL;
    }
    while(fscanf(fp,"%s",str)!=EOF){
        int hashvalue;
        hashvalue = hashfunction(str);
        insert(hashvalue,str);
    }
    printfreq();
   /* int n;
    printf("enter the number of searches\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char fuck[51];
        scanf("%s",fuck);
        int k=hashfunction(fuck);
        int p=search(fuck,k);
        if(p==0)
        {
            printf("not present\n");
        }
        else{
            printf("Present\n");
        }
    }*/

return 1;
}
