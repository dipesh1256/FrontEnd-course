#include <iostream>
using namespace std;
int main()
{
    int i, size;
    int EvenSum=0, OddSum=0;

    cout <<"Enter the Size of Array: ";
    cin >> size;

    int a[size];

    cout <<"Enter the Elements: \n";

    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < size; i++)
    {
        if (i%2 == 0)
        {
            EvenSum += a[i];
        }
        else
        {
            OddSum += a[i];
        }
    }

    cout <<"Sum of Even Position: " <<EvenSum;
    cout <<"\nSum of Odd Position: " <<OddSum;
    
}




/*

Enter the Size of Array: 10
Enter the Elements: 
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
Sum of Even Position: 25
Sum of Odd Position: 30

*/