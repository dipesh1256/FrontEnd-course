#include <iostream>
using namespace std;
int main()
{
    int a = 50, *p;
    p = &a;

    cout <<"Value of a is: " <<a <<"\n";
    cout <<"Address of a is: " <<&a <<"\n";
    cout <<"Address of a using p is: " <<p <<"\n";
    cout <<"Address of p is: " <<&p <<"\n";
    cout <<"Value of a using p is: " <<*p <<"\n";

}



/*

Value of a is: 50
Address of a is: 0x61ff0c
Address of a using p is: 0x61ff0c
Address of p is: 0x61ff08
Value of a using p is: 50

*/