#include <iostream>
using namespace std;
int main()
{
    int i;
    char str[100];

    cout <<"Enter your String: ";
    cin.getline (str,100);

    i=0;
    while (str[i] != '\0')
    {
        i++;
    }

    cout <<"Length of String is: " <<i;

    cout <<endl;
    cout <<"Enter String is: " <<str;
    
}


/*

Enter your String: String
Length of String is: 6
Enter String is: String

*/