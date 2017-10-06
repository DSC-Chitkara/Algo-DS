#include <iostream>
#include <cmath>

using namespace std;

int octalToDecimal(int octal)
{
	int decimal = 0 , num = 0;
	while(octal)
	{
		decimal += (octal%10)*((int)pow(8,num));
		num++;
		octal /= 10;
	}
	return decimal;
}
int main()
{
	char ch;
	do
    {
        int octal;
        cout << "Enter Octal number : ";
        cin >> octal;
        cout << "Number after converting is : "<<octalToDecimal(octal);
        cout << "\nWant to continue ? [y/n] : ";
        cin >> ch;
    }while(ch!='n'||ch!='N');
	return 0;
}
