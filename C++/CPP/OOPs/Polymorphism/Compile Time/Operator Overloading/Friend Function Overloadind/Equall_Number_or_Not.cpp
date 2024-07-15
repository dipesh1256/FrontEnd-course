#include<iostream>
using namespace std;    


class Equal{
    int x,y;

    public:

    void input (){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;

        cout<<endl;
    }

    friend void find(Equal a); 

};

void find(Equal a){
    cout<<"The value of x is : "<<a.x<<endl;
    cout<<"The value of y is : "<<a.y<<endl<<endl;

    if(a.x == a.y)
    {
        cout<<"The value of is X: " <<a.x <<"and Y: " <<a.y <<" is Equal" <<endl;
    }
    else
    {
        cout<<"The value of is X: " <<a.x <<"and Y: " <<a.y <<" is Not Equal" <<endl;
    }
    
}

int main()
{

    Equal a;
    a.input();
    find(a);

    return 0;

}


/*
   *  OUTPUT  *

(1) Value Not Equal:

Enter the value of x: 50
Enter the value of y: 25

The value of x is : 50
The value of y is : 25

The value of is X: 50and Y: 25 is Not Equal

----------------------------------------------------------

(1) Value Not Equal:

Enter the value of x: 50
Enter the value of y: 50

The value of x is : 50
The value of y is : 50

The value of is X: 50and Y: 50 is Equal

*/