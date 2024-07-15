#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Enter the Number: ";
    cin >> num;

    if(num>0)
    {
        cout <<"Your Number is Positive: "<<num;
    }
    else
    {
        cout <<"Your Number is Negative: "<<num;
    }
    
}