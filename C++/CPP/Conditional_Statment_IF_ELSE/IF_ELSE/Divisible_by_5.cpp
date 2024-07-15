#include <iostream>
using namespace std;
int main()
{
    int num, remainder;

    cout <<"Enter your Number: ";
    cin >> num;
    
    remainder = num % 5;

    if(remainder == 0)
    {
        cout <<"Your Number is Divisible by 5";
    }else{
        cout <<"Your Number is not Divisible by 5";
    }
    
}