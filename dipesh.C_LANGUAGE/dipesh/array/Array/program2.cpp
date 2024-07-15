#include<iostream>
using namespace std;

int main ()
{
    int number[]={10,20,30,40,50};

    for(int i=1; i<5; i++)
    {
        std::cout<<number[i]<<",";                                                      

    }
    cout<<number[0]<<std::endl;

    return 0;
}