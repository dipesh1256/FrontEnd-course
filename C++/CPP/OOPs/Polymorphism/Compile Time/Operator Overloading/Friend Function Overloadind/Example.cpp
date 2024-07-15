// Friend Function
#include <iostream>
using namespace std;
class Box
{
    friend Box add(Box, Box);
    int l, b, h;
    public:
    void setData(int x, int y, int z)
    {
        l=x ,b=y, h=z;
    }
    int getVolume();

};
int Box ::getVolume(){
    return l*b*h;
}

Box add(Box m, Box n)
{
    Box t;
    t.l = m.l + n.l;
    t.h = m.h + n.h;
    t.b = m.b + n.b;

    return t;
}

int main()
{
    Box a, b, c;
    a.setData(2,2,2);
    cout <<"Volume of Box A is: " <<a.getVolume() <<endl;

    b.setData(3,3,3);
    cout<<"Volume of Box B is: " <<b.getVolume() <<endl;

    c = add(a,b);
    cout <<"Volume of Box C is: " <<c.getVolume() <<endl;
}