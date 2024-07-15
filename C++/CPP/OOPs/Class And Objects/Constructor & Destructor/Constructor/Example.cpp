#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout<<"Default constructor is called" <<endl;
    }
    Test(int a)
    {
        cout<<"Parameterized constructor is called" <<endl;
        cout<<"Value of a is: " <<a <<endl;
    }
};


int main()
{
    Test t(50), m;
}