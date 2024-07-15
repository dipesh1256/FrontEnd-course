#include <iostream>
using namespace std;
int main()
{
    int i, j, k=1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout <<k <<" ";
        }
        cout <<"\n";
        k += 2;
    }
    
}


/*

1 1 1 1 1 
3 3 3 3 3 
5 5 5 5 5 
7 7 7 7 7 
9 9 9 9 9 

*/