#include <iostream>
using namespace std;
int main()
{
    int num;

    cout <<"Enter your Number: ";
    cin >>num;

    if(num % 5 == 0)
    {
        if(num % 3 == 0)
        {
            cout <<"Number is Divisible by 5 and 3";
        }else{
            cout <<"Number is not Divisible by 3";
        }
    }else{
        cout <<"Number is not Divisible by 5";
    }

}