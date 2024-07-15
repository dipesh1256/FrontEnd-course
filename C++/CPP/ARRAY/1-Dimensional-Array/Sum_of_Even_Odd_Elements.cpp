#include <iostream>
using namespace std;
int main()
{
    int i, count;
    int EvenSum=0, OddSum=0;

    cout <<"Enter the Size of Array: ";
    cin >> count;

    int a[count];

    cout <<"Enter the Elements of Array: \n";
    for (i = 0; i < count; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < count; i++)
    {
        if (a[i]%2 == 0)
        {
            EvenSum += a[i];
        }
        else
        {
            OddSum += a[i];
        }
    }
    
    cout <<"Sum of Even Elements is: " <<EvenSum;
    cout <<"\nSum of Odd Elements is: " <<OddSum;
    
}





/*

Enter the Size of Array: 10
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
Sum of Even Elements is: 30
Sum of Odd Elements is: 25

*/