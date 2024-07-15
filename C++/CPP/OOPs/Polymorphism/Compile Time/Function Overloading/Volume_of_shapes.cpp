#include<iostream>
using namespace std;

class Volume
{
public:
    void Test(int l)
    {
        cout <<"Volume of Cube: "<<l*l*l <<endl;
    }
    void Test(int l, int h, int b)
    {
        cout <<"Volume of cuboid: "<<l*b*h <<endl;
    }
    void Test(double r)
    {
        double pie=3.14;
        cout <<"Volume of Sphere: "<< (4/3)*pie*r <<endl;
    }
    void Test(double l, double b, double h)
    {
        cout <<"Volume of Pyramid: "<< l*b*h/3 <<endl;
    }
    void Test(int h, int r)
    {
        float pie=3.14;
        cout <<"Volume of cylinder: "<< pie*r*r*h <<endl;
    }
    void Test(double h, double r)
    {
        float pie=3.14;
        cout <<"Volume of Cone: "<< pie*r*r*(h/3) <<endl;
    }
};


int main()
{
    Volume v;
    v.Test(20); 
    v.Test(20,20,20); 
    v.Test(20.10); 
    v.Test(25.50, 30.50, 25.50); 
    v.Test(20, 25); 
    v.Test(50.25, 10.15);
}




/*

Volume of Cube: 8000
Volume of cuboid: 8000
Volume of Sphere: 63.114
Volume of Pyramid: 6610.88
Volume of cylinder: 39250
Volume of Cone: 5418.47

*/