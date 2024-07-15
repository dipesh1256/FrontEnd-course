#include <iostream>
using namespace std;

class Bank
{
    int bal;
    string name;

    public:
    void SetData(int bal, string name);

    void GetData()
    {
        cout <<"Balance is: " <<bal <<endl;
        cout <<"Name is: " <<name <<endl;
    }
};

void Bank :: SetData(int bal, string name)
{
    this->bal = bal;
    this->name = name;
}


int main()
{
    Bank b;

    b.SetData(1000, "Hello");

    b.GetData();
}




/*

Balance is: 1000
Name is: Hello

*/