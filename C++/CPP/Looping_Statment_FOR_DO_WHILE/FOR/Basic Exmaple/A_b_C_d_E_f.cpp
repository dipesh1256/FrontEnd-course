#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 65; i <= 90; i++)
    {
        if(i%2 != 0)
        {
            cout <<(char)(i) <<" ";
        }else{
            cout <<(char)(i+32) <<" ";
        }
    }
    
}


/*

A b C d E f G h I j K l M n O p Q r S t U v W x Y z 

*/