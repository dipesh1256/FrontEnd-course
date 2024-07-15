#include <iostream>
using namespace std;
int main()
{
    int i, count, sum=0;

    cout <<"Enter the Size of Array: ";
    cin >> count;

    int a[count];

    cout <<"Enter the Elements of Array: \n";
    for (i = 0; i < count; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout <<"Sum of Elements is: " <<sum;
    
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
Sum of Elements is: 55

*/