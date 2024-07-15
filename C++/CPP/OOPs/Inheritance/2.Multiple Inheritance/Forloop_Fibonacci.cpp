#include <iostream>
using namespace std;

class Base1
{
protected:
    int n;
public:
    void SetA()
    {
        cout <<"Enetr N: ";
        cin >> n;
    }
};

class Base2
{
protected:
    int f, s, next;
public:
    void SetB()
    {
        f = 0;
        s = 1;

        cout <<"Fibonacci Sequence is: " <<f <<" " <<s <<" ";
    }
};

class Derived : public Base1, public Base2
{
    public: 
    void getData()
    {
        for(int i=3; i<=n; i++)
        {
            next = f + s;
            cout << next <<" ";
            f = s;
            s = next;
        }
    }
};


int main()
{
    Derived d;

    d.SetA();
    d.SetB();
    d.getData();
}




/*

Enetr N: 10
Fibonacci Sequence is: 0 1 1 2 3 5 8 13 21 34

*/