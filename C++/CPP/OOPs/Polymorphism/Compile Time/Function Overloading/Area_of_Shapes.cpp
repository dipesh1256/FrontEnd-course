#include<iostream>
using namespace std;

class Area
{
public:
    void Test(double r)
    {
        double pie = 3.14;
        cout <<"Area of Circle is: " <<pie*r*r <<endl;
    }
    void Test(int a)
    {
        cout <<"Area of Square is: " <<a*a <<endl;
    }
    void Test(int l, int b)
    {
        cout <<"Area of Rectangle is: " <<l*b <<endl;
    }
    void Test(double h, double b)
    {
        cout <<"Area of Triangle is: " <<h*(b/2) <<endl;
    }
    void Test(double a, double b, double h)
    {
        cout <<"Area of Trapezium is: " <<(a+b/2)*h <<endl;
    }
};

int main()
{
    Area a;
    
    a.Test(20.20); 
    a.Test(50); 
    a.Test(50, 25); 
    a.Test(30.50, 15.10); 
    a.Test(30.50, 25.25, 50.00);
}



/*

Area of Circle is: 1281.25
Area of Square is: 2500
Area of Rectangle is: 1250
Area of Triangle is: 230.275
Area of Trapezium is: 2156.25

*/