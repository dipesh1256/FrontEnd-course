#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout <<"Enter your Number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            cout <<i*i <<" ";
        }else{
            cout <<i <<" ";
        }
    }
    
}


/*

Enter your Number: 10
1 4 3 16 5 36 7 64 9 100 

*/