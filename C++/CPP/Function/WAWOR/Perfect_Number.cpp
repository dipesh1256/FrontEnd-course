#include <iostream>
using namespace std;

int perfect(int num)
{
    int i, sum=0;

    for (i = 1; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            sum += i;
        }
        
    }

    if (sum == num && num > 0)
    {
        cout << num <<" It's Perfect Number";
    }
    else{
        cout <<num <<" It's Not Perfect Number";
    }
    
    
}

int main()
{
    int num;

    cout <<"Enter Number to ckeck whether it's Perfect Number or Not: ";
    cin >> num;

    perfect(num);
}



/*

Enter Number to ckeck whether it's Perfect Number or Not: 6
6 It's Perfect Number

Enter Number to ckeck whether it's Perfect Number or Not: 10
10 It's Not Perfect Number

*/