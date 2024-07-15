#include <iostream>
using namespace std;
int main()
{
    int s, i, j;
    int SumU=0, SumL=0, SumD=0;

    cout <<"Enter the Size of Array: ";
    cin >> s;

    int a[s][s];

    cout <<"Enter the Elements of Array: \n";
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            cin >> a[i][j];
        }
        
    }

    //For OutPut of Index and Array
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            cout <<i<<" " <<j<<" " << a[i][j] <<"\n";

            if (i<j)
            {
                SumU += a[i][j];
            }
            
            if (i>j)
            {
                SumL += a[i][j];
            }

            if (i==j)
            {
                SumD += a[i][j];
            }

        }
        cout << endl;
    }
    
    cout << endl;

    cout <<"Sum of Upper Triangle: " <<SumU <<"\n";
	
	cout <<"Sum of Lower Triangle: " <<SumL <<"\n";

	cout <<"Sum of Diagonal: " <<SumD;
	
}


/*

Enter the Size of Array: 3
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
0 0 1
0 1 2
0 2 3

1 0 4
1 1 5
1 2 6

2 0 7
2 1 8
2 2 9


Sum of Upper Triangle: 11
Sum of Lower Triangle: 19
Sum of Diagonal: 15

*/