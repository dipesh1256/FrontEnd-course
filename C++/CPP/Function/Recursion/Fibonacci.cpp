#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}

int main()
{
    int num;

    cout <<"Enter any number to find the fiboacci term: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << fibo(i) <<" ";
    }
    
}



/*

Enter any number to find the fiboacci term: 8
0 1 1 2 3 5 8 13  

*/