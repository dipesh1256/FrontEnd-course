#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout <<"Default Constructor is called "<<endl;
    }
    Test(int a)
    {
        cout <<"Square is: "<<a*a <<endl;
    }
    Test(char a)
    {
        cout <<"Char is: "<<a <<endl;
    }
    Test(int a, int b)
    {
        cout <<"Product of A and B is: "<<a*b <<endl;
    }
    Test(int a, int b, int c)
    {
        cout <<"Addition of A, B and C is: "<<a*b <<endl;
    }
};


int main()
{
    Test a(15), b(11,22), c, d(1,2,3), e('S');
}