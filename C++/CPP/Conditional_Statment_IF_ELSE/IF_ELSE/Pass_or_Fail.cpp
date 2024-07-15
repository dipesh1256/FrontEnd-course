#include <iostream>
using namespace std;
int main()
{
    int maths, physics, chemistry, total, percentage;

    cout <<"Enter your marks of Maths: ";
    cin >> maths;
    cout <<"Enter your marks of physics: ";
    cin >> physics;
    cout <<"Enter your marks of chemistry: ";
    cin >> chemistry;

    total = maths + physics + chemistry;

    percentage = total*100/300;

    cout <<"\nTotal Marks: "<<total;
    cout <<"\nPercentage: "<<percentage;

    cout << "\n";

    if(percentage>=35)
    {
        cout <<"You are Pass";
    }else{
        cout <<"You are Fail";
    }
    
}