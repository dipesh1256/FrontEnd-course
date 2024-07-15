#include <iostream>
using namespace std;

class Test
{
public:
    void hello(int a)
    {
        cout <<"Value of A is: "<<a <<endl;
    }
    void hello(int a, int b)
    {
        cout <<"Product of A and B: "<<a*b <<endl;
    }
    void hello(int a, int b, int c)
    {
        cout <<"Addition of A, B and C is: "<<a+b+c <<endl;
    }
};

int main()
{
    Test t;

    t.hello(10);
    t.hello(11,22);
    t.hello(11,22,33);

}




/*

Value of A is: 10
Product of A and B: 242
Addition of A, B and C is: 66

*/