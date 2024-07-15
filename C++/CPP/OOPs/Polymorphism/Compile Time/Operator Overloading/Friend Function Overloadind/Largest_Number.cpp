#include<iostream>
using namespace std;    


class Large{
    int x,y;

    public:

    void input (){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;

        cout<<endl;
    }

    friend void find(Large a); 

};

void find(Large a){
    cout<<"The value of x is : "<<a.x<<endl;
    cout<<"The value of y is : "<<a.y<<endl<<endl;

    if(a.x > a.y){

    cout<<"The Largest value is X: "<<a.x<<endl;
    
    }else{

        cout<<"The Largest value is Y: "<<a.y<<endl;

    }

}

int main()
{

    Large a;
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

The Largest value is X : 50

*/