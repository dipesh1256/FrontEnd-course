#include <iostream>
using namespace std;

class Base1
{
protected:
    int a;
public:
    void setA()
    {
        cout <<"Enter A: ";
        cin >> a;
    }
};

class Base2 : public Base1
{
protected:
    int b;
public:
    void setB()
    {
        cout <<"Enter B: ";
        cin >> b;
    }
};

class Derived : public Base2
{
private:
    /* data */
public:
    void getData()
    {
        for (int i=1; i<=a; i++)
        {
            for (int j=1; j<=b; j++)
            {
                if (i==1 || j==1 || i==a || j==b)
                {
                    cout <<"* ";
                }else
                {
                    cout <<"  ";
                }
            }
            cout <<endl;
        }
        
    }
};


int main()
{
    Derived d;

    d.setA();
    d.setB();
    d.getData();
}



/*

Enter A: 5
Enter B: 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/