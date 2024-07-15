#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else{
        return (num * factorial(num - 1));
    }
}
int main()
{
    int num;

    cout <<"Enter the Number: ";
    cin >> num;

    cout <<"The Factorial is: " <<factorial(num);
}


/*

Enter the Number: 5
The Factorial is: 120

*/