#include<iostream>
using namespace std;

class test {

    private:
    int a=505;

    public:
    void hello()
    {
        cout<<"hello wolrd"<<endl;
        cout<<"value of a:"<<a<<endl;

    }
};
int main()
{
    test t,a;
    t.hello();
    a.hello();
}