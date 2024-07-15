#include <iostream>
using namespace std;
int main()
{
    int i, j, k=65;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(i%2 != 0)
            {
                cout <<(char)(k) <<" ";
            }else{
                cout <<(char)(k+32) <<" ";
            }
            k++;
        }
        cout <<"\n";
    }
    
}


/*

A 
b c 
D E F 
g h i j 
K L M N O 

*/