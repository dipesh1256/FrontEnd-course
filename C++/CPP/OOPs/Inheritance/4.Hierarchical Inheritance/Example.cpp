#include<iostream>
using namespace std;

class Base
{
    protected:
    int a;
    public:
    void SetA()
    {
        cout <<"Enter A: ";
        cin >> a;
    }
};

class ABC : public Base
{
    protected:
    int b;
    public:
    void SetB()
    {
        cout <<"Enter B: ";
        cin >> b;
    }
    void add()
    {
        cout <<"Addition of A and B is: " <<a+b <<endl;
    }
};

class PQR : public Base
{
    protected:
    int c;
    public:
    void SetC()
    {
        cout <<"Enter C: ";
        cin >> c;
    }
    void product()
    {
        cout <<"Product of A and C is: " <<a*c <<endl;
    }
};


int main()
{
    ABC a;

    a.SetA();
    a.SetB();
    a.add();

    PQR p;

    p.SetA();
    p.SetC();
    p.product();
}



/*

Enter A: 10
Enter B: 20
Addition of A and B is: 30
Enter A: 10
Enter C: 30
Product of A and C is: 300

*/