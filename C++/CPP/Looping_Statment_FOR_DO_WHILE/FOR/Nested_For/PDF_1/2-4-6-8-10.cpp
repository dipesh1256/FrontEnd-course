#include <iostream>
using namespace std;
int main()
{
    int i, j, k=2;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout <<k <<"\t";
        }
        cout <<"\n";
        k += 2;
    }
    
}


/*

2       2       2       2       2
4       4       4       4       4
6       6       6       6       6
8       8       8       8       8
10      10      10      10      10

*/