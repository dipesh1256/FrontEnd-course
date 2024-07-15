#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout <<"Enter Value of A: ";
    cin >> a;
    cout <<"Enter Value of B: ";
    cin >> b;
    cout <<"Enter Value of C: ";
    cin >> c;
    cout <<"Enter Value of D: ";
    cin >> d;

    if (a>b && a>c && a>d)
    {
        cout <<"A is Greatest: "<<a;
    }else if (b>c && b>d)
    {
        cout <<"B is Greatest: "<<b;
    }else if (c>d)
    {
        cout <<"C is Greatest: "<<c;
    }else{
        cout <<"D is Greatest: "<<d;
    }
    
}