#include <iostream>
using namespace std;

class Base1
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

class Base2 
{
    protected: 
    int b;
    public: 
    void SetB()
    {
        cout <<"Enter B: ";
        cin >> b;
    }
};

class Derived : public Base1, public Base2
{
    public:
    void getData()
    {
        for (int i=1; i<=a; i++)
        {
            for (int j=1; j<=b; j++)
            {
                cout <<j <<"\t";
            }
            cout <<endl;
        }
        
    }
};


int main()
{
    Derived d;

    d.SetA();
    d.SetB();
    d.getData();
}



/*

Enter A: 5
Enter B: 5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5

*/