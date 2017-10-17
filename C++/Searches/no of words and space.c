#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;

    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }
     printf("number of spaces in given string are: %d\n", count);
    printf("number of word in given string are: %d\n", count + 1);
}
