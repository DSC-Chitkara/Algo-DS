#include <stdio.h>
void binarytooctal();
void octaltobinary();
int three_digits(int);
 int main()
 {
    int selection;
printf("Choose the option to Continue - \n1 - for Octal to Binary\n2 - For binary to Octal");
scanf("%d",&selection);
switch (selection)
{
case 1:
{
    octaltobinary();
    break;
}
case 2:
{
    binarytooctal();
    break;
}
}

}
// Octal number to bianry number conversion
void octaltobinary()
{
    char o[1000];
    long i = 0;
    int binary_num, d=0, base=1, remainder, td, res=0, ord=1;
 
    printf("Enter any octal number: ");
    scanf("%s", o);
    printf("Equivalent binary value: ");
    while (o[i])
    {
        switch (o[i])
        {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("\n Invalid octal digit %c ", o[i]);
            
        }
        i++;
    }
}

// Binary number to octal number conversion
 void binarytooctal()
 {   
    int binary_num, d=0, base=1, remainder, td, res=0, ord=1;
    printf("Enter the binary no: ");
    scanf("%d", &binary_num);

    while(binary_num > 0)
    {
        if(binary_num > 111) //Checking if binary number is greater than three digits
            td = three_digits(binary_num);

        else td = binary_num;

        binary_num = binary_num / 1000;

        d = 0, base =1;

        // Converting the last three digits to decimal
        while(td > 0)
        {
            remainder = td % 10;
            td = td / 10;
            d = d + (base * remainder);
            base = base * 2;
        }

        res = res + d * ord; // Calculating the octal value
        ord = ord * 10;
    }

    printf("\nOctal equivalent is: %d", res);
 
}

//Function that returns the last three digits
int three_digits(int n)
{
    int r, d = 0, p=1;

    for(int i=0; i<3; i++)
    {
        r = n%10;
        d = d + r * p;
        p = p * 10;
        n = n / 10;
    }
    return d;
}
