#include<iostream>
using namespace std;

class Volume
{
public:
    Volume(int l)
    {
        cout <<"Volume of Cube: "<<l*l*l <<endl;
    }
    Volume(int l, int h, int b)
    {
        cout <<"Volume of cuboid: "<<l*b*h <<endl;
    }
    Volume(double r)
    {
        double pie=3.14;
        cout <<"Volume of Sphere: "<< (4/3)*pie*r <<endl;
    }
    Volume(double l, double b, double h)
    {
        cout <<"Volume of Pyramid: "<< l*b*h/3 <<endl;
    }
    Volume(int h, int r)
    {
        float pie=3.14;
        cout <<"Volume of cylinder: "<< pie*r*r*h <<endl;
    }
    Volume(double h, double r)
    {
        float pie=3.14;
        cout <<"Volume of Cone: "<< pie*r*r*(h/3) <<endl;
    }
};


int main()
{
    Volume Cube(20), cuboid(20,20,20), Sphere(20.10), Pyramid(25.50, 30.50, 25.50), cylinder(20, 25), Cone(50.25, 10.15);
}




/*

Volume of Cube: 8000
Volume of cuboid: 8000
Volume of Sphere: 63.114
Volume of Pyramid: 6610.88
Volume of cylinder: 39250
Volume of Cone: 5418.47

*/