#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char str1[100];
    char str2[100];

    cout <<"Enter the String: ";
    cin.getline (str1, 100);
    cout <<"Enter the String: ";
    cin.getline (str2, 100);

    for (i = 0; i < str1[i] != '\0'; i++)
    {
        
    }

    for (j = 0; i < str2[j] != '\0'; j++,i++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    cout << str1;    
    
}





/*

Enter the String: Raj 
Enter the String: Het
Raj Het

*/