#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout <<"Enter the Terms you want to print: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            cout <<i <<" ";
        }
    }
    
}