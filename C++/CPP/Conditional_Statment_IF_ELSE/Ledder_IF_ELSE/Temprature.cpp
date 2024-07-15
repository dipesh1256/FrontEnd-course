#include <iostream>
using namespace std;
int main()
{
    int temp;

    cout <<"Enter the Temprature: ";
    cin >> temp;

    if (temp <= 0)
    {
        cout <<"Freezing Weather";
    }else if (temp <= 10)
    {
        cout <<"Very Cold Weather";
    }else if (temp <= 20)
    {
        cout <<"Cold Weather";
    }else if (temp <= 30)
    {
        cout <<"Normal Temprature";
    }else if (temp <= 40)
    {
        cout <<"It's Hot";
    }else{
        cout <<"It's Very Hot";
    }
    
}