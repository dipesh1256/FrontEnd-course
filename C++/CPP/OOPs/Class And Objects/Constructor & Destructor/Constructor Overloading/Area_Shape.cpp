#include<iostream>
using namespace std;

class Area
{
public:
    Area(double r)
    {
        double pie = 3.14;
        cout <<"Area of Circle is: " <<pie*r*r <<endl;
    }
    Area(int a)
    {
        cout <<"Area of Square is: " <<a*a <<endl;
    }
    Area(int l, int b)
    {
        cout <<"Area of Rectangle is: " <<l*b <<endl;
    }
    Area(double h, double b)
    {
        cout <<"Area of Triangle is: " <<h*(b/2) <<endl;
    }
    Area(double a, double b, double h)
    {
        cout <<"Area of Trapezium is: " <<(a+b/2)*h <<endl;
    }
};

int main()
{
    Area a(20.20), b(50), c(50, 25), d(30.50, 15.10), e(30.50, 25.25, 50.00);
}



/*

Area of Circle is: 1281.25
Area of Square is: 2500
Area of Rectangle is: 1250
Area of Triangle is: 230.275
Area of Trapezium is: 2156.25

*/