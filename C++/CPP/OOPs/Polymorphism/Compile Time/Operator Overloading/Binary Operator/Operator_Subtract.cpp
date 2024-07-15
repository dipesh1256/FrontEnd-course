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
        return l*b*h;
    }

    Box operator- (Box &n)
    {
        Box s;

        s.l = l - n.l;
        s.b = b - n.b;
        s.h = h - n.h;

        return s;
    }
};


int main ()
{
    Box i, j, k;

    i.SetData(10,10,10);
    cout <<"Value of I is: " <<i.getVolume() <<endl;

    j.SetData(4,4,4);
    cout <<"Value of J is: " <<j.getVolume() <<endl;

    k = i - j;
    cout <<"Value of K is: " <<k.getVolume() <<endl;
}




/*

Value of I is: 1000
Value of J is: 64
Value of K is: 216

*/