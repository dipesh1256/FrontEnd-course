#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        k = 65;
        for (j = 1; j <= i; j++)
        {
            cout <<(char)(k++) <<" ";
        }
        cout <<"\n";
    }
    
}


/*

A 
A B 
A B C 
A B C D 
A B C D E

*/