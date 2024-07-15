#include <iostream>
using namespace std;
int main()
{
    int i=1;

    skill:
    if(i<=15)
    {
        cout <<i <<" ";
        i++;
        goto skill;
    }

}



/*

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 

*/