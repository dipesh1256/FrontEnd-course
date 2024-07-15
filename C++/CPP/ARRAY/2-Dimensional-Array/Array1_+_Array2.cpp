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
    int b[r][c];

    //For Array1/a
    cout <<"Enter Elements of Array1: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
        
    }
    
    //For Array2/b
    cout <<"Enter Elements of Array1: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
        
    }

    cout <<"\n";


    //For Output
    cout <<"Array1\t\tArray2\t\ttotal\n";

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] <<" ";
        }
        
        cout <<"\t\t";

        for (j = 0; j < c; j++)
        {
            cout << b[i][j] <<" ";
        }
        
        cout <<"\t";

        for (j = 0; j < c; j++)
        {
            cout << a[i][j] + b[i][j] <<" ";
        }
        cout <<"\n";
    }
    
}


/*

Enter the Size of Row: 3
Enter the Size of Column: 3
Enter Elements of Array1: 
1
2
3
4
5
6
7
8
9
Enter Elements of Array1:
10
11
12
13
14
15
16
17
18

Array1          Array2          total
1 2 3           10 11 12        11 13 15
4 5 6           13 14 15        17 19 21
7 8 9           16 17 18        23 25 27

*/