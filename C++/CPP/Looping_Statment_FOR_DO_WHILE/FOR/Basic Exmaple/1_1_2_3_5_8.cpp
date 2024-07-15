#include <iostream>
using namespace std;
int main()
{
    int i, n, f=1, s=1, next;

    cout <<"Enter the term you want to print: ";
    cin >> n;

    cout <<f <<" " <<s <<" ";

    for (i = 3; i <= n; i++)
    {
        next = f + s;
        cout <<next <<" ";
        f = s;
        s = next;
    }
    
}


/*

Enter the term you want to print: 10
1 1 2 3 5 8 13 21 34 55  

*/