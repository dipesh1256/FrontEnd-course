#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j;

    cout <<"Enter the Size of Row: ";
    cin >> r;
    cout <<"Enter the Size of Column: ";
    cin >> c;

    int a[r][c];

    //For User Input
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout <<"Enter the Elements: ";
            cin >> a[i][j];
        }
        
    }

    cout <<"\n";
    
    //For Output
    cout <<"Array of Space Matrix is: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                cout <<" " <<"\t";
            }else
            {
                cout << a[i][j] <<"\t";
            }
        }
        cout <<"\n";
    }
}




/*

Enter the Size of Row: 3
Enter the Size of Column: 3
Enter the Elements: 1
Enter the Elements: 0
Enter the Elements: 3
Enter the Elements: 0
Enter the Elements: 5
Enter the Elements: 0
Enter the Elements: 7 
Enter the Elements: 0
Enter the Elements: 9

Array of Space Matrix is:
1               3
        5
7               9

*/