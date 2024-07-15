#include <iostream>
using namespace std;

class Base                                  // Base Class--> 1
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


class B : public Base                       // Multilevel  Interitance   Sub Class--> 1
{
    protected:
    int b;

    public:
    void SetB()
    {
        cout <<"Enter B: ";
        cin >> b;
    }

    void Devide()
    {
        cout <<"Devision of A and B is: " <<a/b <<endl;
    }
};

class C : public B                          // Sub Class--> 2
{
    protected:
    int c;
    
    public:
    void SetC()
    {
        cout <<"Enter C: ";
        cin >> c;
    }

    void Product()
    {
        cout <<"Product of A and C is: " <<a*c <<endl;
    }
};


class Base2                                 // Base Class--> 2
{
    protected:
    int d;

    public:
    void SetD()
    {
        cout <<"Enter D: ";
        cin >> d;
    }
};

class E : public Base, public Base2         // Single  Inheritance   Sub Class--> 1
{
    protected:
    int e;

    public:
    void SetE()
    {
        cout <<"Enter E: ";
        cin >> e;
    }

    void Add()
    {
        SetA();
        cout <<"Addition of A and E is: " <<a+e <<endl;
    }

    void Sub()
    {
        cout <<"Subtraction of D and E is: " <<d-e <<endl;
    }
};


int main()
{
    // C c;
    // c.SetA();
    // c.SetB();
    // c.Devide();
    // c.SetA();
    // c.SetC();
    // c.Product();

    E e;
    // e.SetA();
    e.SetE();
    e.Add();
    e.SetD();
    e.SetE();
    e.Sub();
}




/*

Enter A: 50
Enter B: 10
Devision of A and B is: 5
Enter A: 20
Enter C: 5
Product of A and C is: 100
Enter A: 30
Enter D: 10
Addition of A and E is: 4201070
Enter D: 50
Enter E: 20
Subtraction of D and E is: 30

*/