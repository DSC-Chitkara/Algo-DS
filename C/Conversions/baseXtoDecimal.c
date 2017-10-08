#include <stdio.h>
#include <string.h>
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
int toDeci(char *str, int base)
{
    int len = strlen(str), power = 1, num = 0, i;
    for (i=len-1;i>=0;i--)
    {
        if(val(str[i])>= base)
        {
           printf("Invalid");
           return -1;
        }
	num += val(str[i]) * power;
        power = power * base;
    }
    return num;
}
int main()
{
    char str[50];
    gets(str);
    int base;
    scanf("%d",&base);	
    printf("Decimal equivalent of %s in base %d is "
           " %d\n", str, base, toDeci(str, base));
    return 0;
}

