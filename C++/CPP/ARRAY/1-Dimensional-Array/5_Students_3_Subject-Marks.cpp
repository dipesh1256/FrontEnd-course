#include <iostream>
using namespace std;
int main()
{
    int i, maths[5], physics[5], chemistry[5], total=0;
    float percent;
    char grade;

    cout <<"Enter the Marks of Maths: \n";
    for (i = 0; i < 5; i++)
    {
        cin >> maths[i];
    }
    
    cout <<"Enter the Marks of Physics: \n";
    for (i = 0; i < 5; i++)
    {
        cin >> physics[i];
    }

    cout <<"Enter the Marks of Chemistry: \n";
    for (i = 0; i < 5; i++)
    {
        cin >> chemistry[i];
    }

    cout <<"\n";
    cout <<"maths\tphysics\tchemistry\ttotal\tpercent\tgrade\n";

    for (i = 0; i < 5; i++)
    {
        total = maths[i] + physics[i] + chemistry[i];
        percent = total * 100 / 300;

        if(percent >= 75)
        {
            grade = 'A';
        }else if (percent >= 60 && percent < 75)
        {
            grade = 'B';
        }else if (percent >= 45 && percent < 60)
        {
            grade = 'C';
        }else if (percent >= 35 && percent < 45)
        {
            grade = 'D';
        }else
        {
            grade = 'F';
        }
        
        cout <<maths[i] <<"\t" <<physics[i] <<"\t" <<chemistry[i] <<"\t" <<"\t" <<total <<"\t" <<percent <<"\t" <<grade <<"\n";
    }

}




/*

Enter the Marks of Maths: 
90
80
70
60
50
Enter the Marks of Physics: 
80
70
50
40
30
Enter the Marks of Chemistry:
75
70
50
30
10

maths   physics chemistry       total   percent grade
90      80      75              245     81      A
80      70      70              220     73      B
70      50      50              170     56      C
60      40      30              130     43      D
50      30      10              90      30      F

*/