#include <iostream>
using namespace std;
int main()
{
    int i, n, s=1;

    cout <<"Enter your Number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout <<s <<" ";
        s *= 2;
    }
    
}



/*

Enter your Number: 10
1 2 4 8 16 32 64 128 256 512

*/