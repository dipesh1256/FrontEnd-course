#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float f = 0.5, s = 0;

    cout <<"Enter terms you want to print: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << f <<" ";
        f = 0.5 + f + s;
        s++;
    }
    
}



/*

Enter terms you want to print: 10
0.5 1 2.5 5 8.5 13 18.5 25 32.5 41

*/