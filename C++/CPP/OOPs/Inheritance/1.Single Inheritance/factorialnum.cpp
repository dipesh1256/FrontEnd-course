#include<iostream>
using namespace std;
class base
{
    protected:
    int n,fact=1,i;

    public:
    void A()
    {
        cout << "Enter The Value Of N : " ;
        cin  >> n ;
        cout << endl;
    }
};

class derived : public base
{
    public:
    void B()
    {
        A();
        for (i=1 ; i<=n ; i++)
        {
            fact*=i;
            cout << "Factorial " << i << " is : " << fact << endl;
        }
    }
};

int main()
{
    derived a;
    a.B();
}

/*

Enter The Value Of N : 5

Factorial 1 is : 1
Factorial 2 is : 2
Factorial 3 is : 6
Factorial 4 is : 24
Factorial 5 is : 120

*/