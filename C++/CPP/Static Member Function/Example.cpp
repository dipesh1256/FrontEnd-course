#include <iostream>
using namespace std;

class bank
{
    public:
    static int a;    // Declare.
    bank()
    {
        cout <<"Constructor is called... " <<endl;
        a++;
    }

    static int fun()
    {
        return a;
    }
};

int bank :: a =505;   // Initialization.

int main()
{
    cout <<"Initial value of A is: " <<bank::a <<endl;
    // cout <<"Initial value of A is: " <<bank::fun() <<endl;

    bank b,a,s,d,f;

    // cout <<"After Initialze value of A is: " <<bank::a <<endl;
    cout <<"After Initialze value of A is: " <<bank::fun() <<endl;

}



/*

Initial value of A is: 505
Constructor is called... 
Constructor is called... 
Constructor is called... 
Constructor is called... 
Constructor is called... 
After Initialze value of A is: 510

*/