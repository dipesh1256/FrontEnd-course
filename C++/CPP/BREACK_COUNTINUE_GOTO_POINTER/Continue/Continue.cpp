#include <iostream>
using namespace std;
int main()
{
    int i;

    for(i=1; i<=15; i++)
    {
        if(i==4 || i==8)
        {
            continue;
        }
        cout <<i <<" ";
    }

}



/*

1 2 3 5 6 7 9 10 11 12 13 14 15 

*/