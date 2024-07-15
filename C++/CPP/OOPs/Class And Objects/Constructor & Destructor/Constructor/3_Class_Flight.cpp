#include <iostream>
using namespace std;

class Flight
{
private:
    int Flightnumber; 
    float Fuel, Distance;
    char Destation[50];

    float CALFUEL()
    {
        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance <= 2000)
        {
            Fuel = 1100;
        }
        else{
            Fuel = 2200;
        }
        return Fuel;
    }

public:
    Flight()
    {
        cout <<"Flight Number: ";
        cin >> Flightnumber;
        cout <<"Destation: ";
        cin.get();
        cin.getline(Destation,50);
        cout <<"Distance: ";
        cin >> Distance;

        CALFUEL();
    }


    void SHOWINFO()
    {
        cout <<"Flight Number: " <<Flightnumber <<endl;
        cout <<"Destation: " <<Destation <<endl;
        cout <<"Distance: " <<Distance <<endl;
        
        cout <<"FUEL: " <<CALFUEL() <<endl;

    }
};

int main()
{
    Flight F;
    
    cout <<endl;
    F.SHOWINFO();

    return 0;
}



/*
4. Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance Fuel
<=1000 500
more than 1000 and <=2000 1100
more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members



OUTPUT:
Flight Number: 1004
Destation: Dubai
Distance: 999

Flight Number: 1004
Destation: Dubai
Distance: 999
FUEL: 500

*/