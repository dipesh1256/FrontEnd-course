#include <iostream>
using namespace std;

class Box
{
public:
    int l, b, h;
    void SetData(int x, int y, int z)
    {
        l = x, b = y, h = z;
    }

    int getVolume()
    {
        return l * b * h;
    }

    Box operator/ (Box &n)
    {
        Box d;

        d.l = l / n.l;
        d.b = b / n.b;
        d.h = h / n.h;

        return d;
    }
};

int main()
{
    Box a, b, c;

    a.SetData(25, 25, 25);
    cout <<"Volume of A is: " <<a.getVolume() <<endl;

    b.SetData(10, 10, 10);
    cout <<"Volume of B is: " <<b.getVolume() <<endl;

    c = a / b;
    cout <<"Volume of C is: " <<c.getVolume() <<endl;
}


/*

Volume of A is: 15625
Volume of B is: 1000
Volume of C is: 8

*/