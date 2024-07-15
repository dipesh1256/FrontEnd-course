#include <iostream>
using namespace std;

class Report
{
private:
    int adno;
    char name[20];
    float marks[5], avg;

    float GETAVG()
    {
        avg = 0.0;
        for (int i = 0; i < 5; i++)
        {
            cout <<"Enter Marks in Sunbject" <<i+1 <<":";

            cin >> marks[i];

            avg += marks[i];
        }
        return avg/5;
    }
public:
    Report()
    {
        cout << "Enter The admission number : ";
		cin >> adno;

		cout << "Enter  Name : ";
		cin.get();
		cin.getline(name,20);

        GETAVG ();
    }
    void DISPLAYINFO()
    {
        cout << "Admission number is :  " << adno << endl;
        cout << "Name is :  " << name << endl;

        for(int i = 0; i < 5; i++){
            cout << "Marks of subject " << i+1 << " : " << marks[i] <<endl;
        } 
        cout << "\nAverage mark is :  " << avg << endl;
    }
};


int main(){

    Report r;

    cout <<endl;
    r.DISPLAYINFO();

    return 0;
}



/*
6. Define a class REPORT with the following specification:
Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject
Public members:
READINFO() function to accept values for adno, name, marks. Invoke the function
GETAVG()
DISPLAYINFO() function to display all data members of a report on the screen.
You should give function definitions



OUTPUT:
Enter The admission number : 104
Enter  Name : ANKUSH
Enter Marks in Sunbject1:90
Enter Marks in Sunbject2:80
Enter Marks in Sunbject3:75
Enter Marks in Sunbject4:85
Enter Marks in Sunbject5:95

Admission number is :  104
Name is :  ANKUSH
Marks of subject 1 : 90
Marks of subject 2 : 80
Marks of subject 3 : 75
Marks of subject 4 : 85
Marks of subject 5 : 95

Average mark is :  425
*/