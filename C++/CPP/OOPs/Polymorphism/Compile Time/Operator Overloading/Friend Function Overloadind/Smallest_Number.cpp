#include<iostream>
using namespace std;    


class Small{
    int x,y;

    public:

    void input (){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;

        cout<<endl;
    }

    friend void find(Small a); 

};

void find(Small a){
    cout<<"The value of x is : "<<a.x<<endl;
    cout<<"The value of y is : "<<a.y<<endl<<endl;

    if(a.x < a.y){

    cout<<"The Smallest value is X : "<<a.x<<endl;
    
    }else{

        cout<<"The Smallest value is Y : "<<a.y<<endl;

    }

}

int main()
{

    Small a;
    a.input();
    find(a);

    return 0;

}


/*
   *  OUTPUT  *


Enter the value of x: 50
Enter the value of y: 25

The value of x is : 50
The value of y is : 25

The Smallest value is Y : 25

*/