#include <iostream>
using namespace std;

class Box
{
public:
    int l, b, h;
    void SetData(int x, int y, int z)
    {
        l = x,  b = y,  h = z;
    }

    int getVolume()
    {
        return l*b*h;
    }

    Box operator% (Box &n)
    {
        Box m;

        m.l = l % n.l;
        m.b = b % n.b;
        m.h = h % n.h;

        return m;
    }
};


int main()
{
    Box a, b, c;

    a.SetData(53, 53, 53);
    cout <<"Volume of A is: " <<a.getVolume() <<endl;

    b.SetData(10, 10, 10);
    cout <<"Volume of A is: " <<b.getVolume() <<endl;

    c = a % b;
    cout <<"Volume of A is: " <<c.getVolume() <<endl;
}



/*

Volume of A is: 148877
Volume of A is: 1000
Volume of A is: 27

*/