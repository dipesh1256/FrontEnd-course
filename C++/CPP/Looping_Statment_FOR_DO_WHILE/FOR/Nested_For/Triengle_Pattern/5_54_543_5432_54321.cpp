#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        k = 5;
        for (j = 1; j <= i; j++)
        {
            cout <<k-- <<" ";
        }
        cout <<"\n";
    }
    
}


/*

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1

*/