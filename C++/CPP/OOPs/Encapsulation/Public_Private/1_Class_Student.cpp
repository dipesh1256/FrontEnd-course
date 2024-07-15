#include <iostream>
using namespace std;

class Student
{
private:
    int admno;
    char sname[20];
    float english, math, science;
    float total;

    float ctotal()
    {
        return english + math + science;
    }

public:
    void Takedata()
    {
        cout <<"Enter the Admission: ";
        cin >> admno;
        cout <<"Enter the Student-Name: ";
        cin.get();
        cin.getline(sname,20);
        cout <<"Enter the English Marks: ";
        cin >> english;
        cout <<"Enter the Math Marks: ";
        cin >> math;
        cout <<"Enter the Science Marks: ";
        cin >> science;
        total = ctotal();
    }
    
    void showdata() {
        cout << "Admission number: " << admno << endl;
        cout << "Student name: " << sname << endl;
        cout << "Marks obtained in English: " << english << endl;
        cout << "Marks obtained in Math: " << math << endl;
        cout << "Marks obtained in Science: " << science << endl;
        cout << "Total marks: " << total << endl;
    }
};

int main()
{
    Student s;
    
    s.Takedata();
    cout <<endl;
    s.showdata();

    return 0;
}




/*
1. Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and invoke
ctotal() to calculate total.
Showdata() Function to display all the data members on the screen.


OUTPUT:
Enter the Admission: 101
Enter the Student-Name: Raj Kanani
Enter the English: 90
Enter the Math: 85
Enter the Science: 75

Admission number: 101
Student name: Raj Kanani
Marks obtained in English: 90
Marks obtained in Math: 85
Marks obtained in Science: 75
Total marks: 250

*/