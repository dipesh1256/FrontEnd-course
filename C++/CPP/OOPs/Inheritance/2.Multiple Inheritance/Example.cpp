#include<iostream>
using namespace std;

class Base1
{
protected:
    int a;
public:
    void setA()
    {
        cout<< "Enter A: ";
        cin>>a;
    }
};

class Base2
{
protected:
    int b;
public:
    void setB()
    {
        cout << "Enter B: ";
        cin>>b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void getProduct()
    {
        cout <<"Product of A and B is: " <<a*b <<endl;
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
Enter B: 20
Product of A and B is: 200

*/