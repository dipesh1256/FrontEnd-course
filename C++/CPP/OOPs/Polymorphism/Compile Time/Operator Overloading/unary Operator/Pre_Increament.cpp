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

    int GetVolume()
    {
        return l*b*h;
    }

    Box operator++ ()
    {
        Box i;

        i.l = ++l;
        i.b = ++b;
        i.h = ++h;

        return i;
    }
};


int main()
{
    Box a;

    a.SetData(2, 2, 2);
    cout <<"Volume of Box A is: " <<a.GetVolume() <<endl;

    ++a; //(3, 3, 3)
    cout <<"After Incremene Volume of Box A is: " <<a.GetVolume() <<endl;
}


/*

Volume of Box A is: 8
After Incremene Volume of Box A is: 27

*/