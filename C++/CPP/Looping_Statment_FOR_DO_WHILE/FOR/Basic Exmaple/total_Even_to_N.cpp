#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;

    cout <<"Enter a Number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum += i;
        }   
    }
    cout <<"Sum of Even Number is: " <<sum;
    
}