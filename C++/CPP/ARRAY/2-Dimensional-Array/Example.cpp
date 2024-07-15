#include <iostream>
using namespace std;
int main()
{
    int array[2][3]={{1,2,3},{4,5,6}};
    int array1[3][3];
    int r, c;
    int i, j;

    //For User Input
    cout <<"Enter the Elements of Array: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> array1[i][j];
        }
        
    }

    cout <<"Enter the Size of Row: ";
    cin >> r;
    cout <<"Enter the Size of Colum: ";
    cin >> c;

    int array2[r][c];

    cout <<"Enter the Elements of Array: \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> array2[i][j];
        }
        
    }

    cout <<"\n";
    

    //For Output
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << array[i][j] <<"\t";
        }
        cout <<"\n";
    }

    cout <<"\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << array1[i][j] <<"\t";
        }
        cout <<"\n";
    }

    cout <<"\n";

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << array2[i][j] <<"\t";
        }
        cout <<"\n";
    }

}






/*

Enter the Elements of Array: 
9
8
7
6
5
4
3
2
1
Enter the Size of Row: 5
Enter the Size of Colum: 5
Enter the Elements of Array:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25

1       2       3
4       5       6

9       8       7
6       5       4
3       2       1

1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
21      22      23      24      25

*/