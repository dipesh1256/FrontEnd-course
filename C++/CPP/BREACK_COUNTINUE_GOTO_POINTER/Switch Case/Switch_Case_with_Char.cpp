#include <iostream>
using namespace std;
int main()
{
    int a = 200, b = 50;
    char ch;

    cout <<"A. Add\n";
    cout <<"B. Substract\n";
    cout <<"C. multiply\n";
    cout <<"D. Division\n";
    cout <<"Enter choice: ";
    cin >> ch;

    switch(ch)
    {
        case 'A':
            cout <<"\n Addition is: " << a + b;
            break;
        case 'B':
            cout <<"\n Substract is: " << a - b;
            break;
        case 'C':
            cout <<"\n multiply is: " << a * b;
            break;
        case 'D':
            cout <<"\n Division is: " << a / b;
            break;
        default:
            cout <<"Wrong Choice";
            break;
    }
}




/*

A. Add
B. Substract
C. multiply
D. Division
Enter choice: A

 Addition is: 250

*/