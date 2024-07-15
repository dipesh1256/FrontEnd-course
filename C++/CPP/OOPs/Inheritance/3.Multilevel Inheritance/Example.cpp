#include<iostream>
using namespace std;

class Base1
{
protected:
    int a;
public:
    void setA()
    {
        cout <<"Enter A: ";
        cin>>a;
    }
};

class Base2 : public Base1
{
protected:
    int b;
public:
    void setB()
    {
        cout <<"Enetr B: ";
        cin>>b;
    }
};

class Derived : public Base2
{
public:
    void getProduct()
    {
        cout <<"Poduct of A and B is: "<< a*b <<endl;
    }
};


int main()
{
    Derived d;
    d.setA();
    d.setB();
    d.getProduct();
}



/*

Enter A: 10
Enetr B: 20
Poduct of A and B is: 200

*/