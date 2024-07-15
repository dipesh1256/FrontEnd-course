/*
    stdio.h  =>  iostream

    printf()  =>  cout
                  <<  =>  insertion operator
                  ::  =>  scope resolution operator

    scanf()  =>  cin
                 >>  =>  extersion operator
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Hello World\n";
    cout << "Enter A: ";
    cin  >> a;
    cout << "Enter B: ";
    cin  >> b;

    cout << "Value of A: " <<a << "\nValue of B: " <<b; 
}