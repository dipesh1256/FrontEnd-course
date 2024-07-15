#include<iostream>
using namespace std;
class base
{
    protected:
    int n,num,num1,temp=1,i;

    public:
    void A()
    {
        cout << "Enter The Value Of N : " ;
        cin  >> n ;
    }
};

class derived : public base
{
    public:
    void B()
    {
        A();
        for (i=1 ; i<=n ; i++)
        {
            num = i*temp;
            cout <<  num << endl;
            temp*=2;
        }
    }
};

int main()
{
    derived a;
    a.B();
}

/*

Enter The Value Of N : 7
1
4
12
32
80
192
448

*/