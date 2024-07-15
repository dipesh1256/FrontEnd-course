#include <iostream>
using namespace std;
int main()
{
    int i, n, f=1, s=1;

    cout <<"Enter a Number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout <<f <<" ";
        f = 2 * (f + s);
        s *= 2;
    }
    
}


/*

Enter a Number: 10
1 4 12 32 80 192 448 1024 2304 5120  

*/