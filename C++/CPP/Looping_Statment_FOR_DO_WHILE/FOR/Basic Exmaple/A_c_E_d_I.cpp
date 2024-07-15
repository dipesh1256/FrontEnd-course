#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int letter = 65;

    cout <<"Enter terms you want to print: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i%2 == 1)
        {
            cout << (char)(letter) <<" ";
        }else{
            cout <<(char)(letter + 32) <<" ";
        }
        letter += 2;
        
    }
    
}


/*

Enter terms you want to print: 10
A c E g I k M o Q s 

*/