#include<iostream>
using namespace std;

class Base1
{
protected:
    char str[100];
public:
    void setA()
    {
        cout <<"Enter your String: ";
        cin.getline (str,100);
    }
};

class Base2 : public Base1
{
protected:
    int i;
public:
    void setB()
    {
    for (i = 0; str[i] != '\0'; i++)
    {
        
    }
        cout <<"Length of String is: " << i;
        cout <<endl;
    }
};

class Derived : public Base2
{
public:
    void getProduct()
    {
        while (i>=0)
        {
            cout <<str[i];
            i--;
        }
        
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

Enter your String: RAJ KANANI  
Length of String is: 10
INANAK JAR

*/