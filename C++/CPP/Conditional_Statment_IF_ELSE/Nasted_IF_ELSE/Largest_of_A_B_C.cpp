#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout <<"Enter the Value of A: ";
    cin >> a;
    cout <<"Enter the Value of B: ";
    cin >> b;
    cout <<"Enter the Value of C: ";
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout <<"A is Largest: "<<a;
        }
    }else{
        if(b>c)
        {
            cout <<"B is Largest: "<<b;
        }else{
            cout <<"C is Largest: "<<c;
        }
    }
    
}