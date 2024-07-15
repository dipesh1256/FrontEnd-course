#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void hello()
    {
        cout <<"Base Class Hello" <<endl;
    }
};

class Derived : public Base
{
    public:
    void hello()
    {
        cout <<"Derived Class Hello" <<endl;
    }
};

int main()
{
    Base *p, b;
    Derived d;

    d.hello();
    d.hello();

    p = &b;
    p -> hello();

    // p = &d;
    // p -> hello();
}

/*

Derived Class Hello
Derived Class Hello
Base Class Hello

*/