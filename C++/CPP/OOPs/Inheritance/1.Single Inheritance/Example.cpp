// Single Inheritance

#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;

    public:
    void hello()
    {
        cout << "Hello" << endl;
    }
};

class Derived : public Base
{
    public:
    void world()
    {
        hello();
        a = 101;
        cout << "World : " << a << endl;
    }
};

int main()
{
    Derived d;
    // d.hello();
    d.world();
}

// Factorial Number
// Student Result
// 1 4 12 32 80 ....


/*

Hello      
World : 101

*/