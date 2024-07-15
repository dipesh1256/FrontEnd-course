#include <iostream>
using namespace std;

class Base1
{
    protected:
    int n;
    public:
    void SetA()
    {
        cout <<"Enter N: ";
        cin >> n;
    }
};

class Base2 : public Base1
{
    protected:
    int i, sum=0;
    public:
    void SetB()
    {
        for (i=1; i<=n/2; i++)
        {
            if (n%i == 0)
            {
                sum += i;
            }
            
        }
        
    }
};


class Derived : public Base2
{
    public:
    void GetData()
    {
        if(sum == n && n > 0)
        {
            cout <<n <<" is PERFECT NUMBER";
        }
        else
        {
            cout <<n <<" is NOT PERFECT NUMBER";
        }
    }
};


int main()
{
    Derived d;

    d.SetA();
    d.SetB();
    d.GetData();
}



/*
OUTPUT 1:

Enter N: 6
6 is PERFECT NUMBER.


OUTPUT 2:

Enter N: 10
10 is NOT PERFECT NUMBER
*/