#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string str;
    int count = 0; //total space count
    cout << "Enter a string : ";
    getline(cin,str); //Input of the string
    for (int i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ') //if space found then increase the count
            count++;    
    }
    cout<<"Number of Spaces are :"<<count<<endl;
    cout << "Number of words in the string are: " << count + 1<<endl;

    return 0;
}
/* Example:
Enter a string : hello sm
Number of Spaces are :1
Number of words in the string are: 2
*/
