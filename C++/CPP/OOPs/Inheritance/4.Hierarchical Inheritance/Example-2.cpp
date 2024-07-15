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

class B : public Base
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
        cout <<"Addition of A and B is: " <<a+b <<endl <<endl;
    }
    
};
class C : public Base
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
        cout <<"Product of A and C is: " <<a*c <<endl <<endl;
    }
};

class D : public Base
{
    protected:
    int d;
    public:
    void SetD()
    {
        cout <<"Enter D: ";
        cin >> d;
    }
    void sub()
    {
        cout <<"Subtract of A and d is: " <<a-d <<endl;
    }
};

int main()
{
    B b;

    b.SetA();
    b.SetB();
    b.add();

    C   c;
    c.SetA();
    c.SetC();
    c.product();


    D d;
    d.SetA();
    d.SetD();
    d.sub();
}



/*

Enter A: 20
Enter B: 10
Addition of A and B is: 30

Enter A: 20
Enter C: 10
Product of A and C is: 200

Enter A: 20
Enter D: 10
Subtract of A and d is: 10

*/