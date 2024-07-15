#include <iostream>
using namespace std;
int main()
{
    int a = 200, b = 50, ch;

    cout <<"1. Add\n";
    cout <<"2. Substract\n";
    cout <<"3. multiply\n";
    cout <<"4. Division\n";
    cout <<"Enter choice: ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            cout <<"\n Addition is: " << a + b;
            break;
        case 2:
            cout <<"\n Substract is: " << a - b;
            break;
        case 3:
            cout <<"\n multiply is: " << a * b;
            break;
        case 4:
            cout <<"\n Division is: " << a / b;
            break;
        default:
            cout <<"Wrong Choice";
            break;
    }
}




/*

1. Add
2. Substract
3. multiply
4. Division
Enter choice: 3

 multiply is: 10000

*/