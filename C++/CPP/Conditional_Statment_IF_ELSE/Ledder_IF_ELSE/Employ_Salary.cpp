#include <iostream>
using namespace std;
int main()
{
    int  salary, total;

    cout <<"Enter your salary: ";
    cin >> salary;

    if(salary <= 5000)
    {
        total = salary +(salary*(0.08+0.20));
    }else if (salary <=10000)
    {
        total = salary + (salary*(0.12+0.30));
    }else if (salary <= 15000)
    {
        total = salary + (salary*(0.15+0.40));
    }else{
        total = salary + (salary*(0.20+0.50));
    }

    cout <<"Your total Salary is: "<<total;
    
}