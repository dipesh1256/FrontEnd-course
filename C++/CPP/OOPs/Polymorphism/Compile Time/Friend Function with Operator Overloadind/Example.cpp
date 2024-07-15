#include <iostream>
using namespace std;

class Box
{
public:
int l, b, h;
    void setdata(int x, int y, int z)
    {
        l=x, b=y, h=z;
    }

    int getvolume()
    {
        return l*b*h; 
    }

    friend Box operator+ (Box m, Box n)
    {
        Box t;

        t.l = m.l + n.l;
        t.b = m.b + n.b;
        t.h = m.h + n.h;

        return t;
    }

    friend Box operator++ (Box, int);
};

    Box operator++ (Box n, int)
    {
        Box t;

        t.l = ++n.l;
        t.b = ++n.b;
        t.h = ++n.h;

        return t;
    }

    // Box operator+ (Box m, Box n)
    // {
    //     Box t;

    //     t.l = m.l + n.l;
    //     t.b = m.b + n.b;
    //     t.h = m.h + n.h;

    //     return t;
    // }




int main()
{
    Box a, b, c, d;

    a.setdata(2, 2, 2);
    cout <<"Volume of Box A is: " <<a.getvolume() <<endl;
    b.setdata(2, 2, 2);
    cout <<"Volume of Box B is: " <<b.getvolume() <<endl;

    c = a + b;
    cout<<"Volume of Box C is: " <<c.getvolume() <<endl;

    //d = ++c;
    d = c++;
    cout <<"Volume of Box D is: " <<d.getvolume() <<endl;
    cout <<"Volume of Box D is: " <<c.getvolume() <<endl;

}



/*

Volume of Box A is: 8
Volume of Box B is: 8
Volume of Box C is: 64
Volume of Box D is: 125
Volume of Box D is: 64

*/