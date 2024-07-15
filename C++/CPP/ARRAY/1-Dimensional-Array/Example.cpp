#include <iostream>
using namespace std;
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int array1[8]={10,15,20,25,30,35,40,45};
    int array2[5], i;
    
    //For User Input
    
    for (i = 0; i < 5; i++)
    {
        cout <<"Enter the Elements: ";
        cin >> array2[i];
    }
    
    
    //For Output
    
    cout <<"Array \n";
    
    for (i = 0; i < 10; i++)
    {
        cout <<i  <<" " <<array[i] <<"\n";
    }
    
    cout <<"Array1 \n";
    
    for (i = 0; i < 8; i++)
    {
        cout <<i  <<" " <<array[i] <<"\n";
    }
    
    cout <<"Array2 \n";
    
    for (i = 0; i < 5; i++)
    {
        cout <<i  <<" " <<array[i] <<"\n";
    }

}



/*

Enter the Elements: 1
Enter the Elements: 2
Enter the Elements: 3
Enter the Elements: 4
Enter the Elements: 5
Array 
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
Array1
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
Array2
0 1
1 2
2 3
3 4
4 5

*/