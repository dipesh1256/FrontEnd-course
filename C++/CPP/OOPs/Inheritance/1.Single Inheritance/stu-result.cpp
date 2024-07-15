#include<iostream>
using namespace std;
class base
{
    protected:
    int n, math[10] , sci[10] , phy[10] , eng[10] , guj[10] ;
	int total[10],i,rollno[10];
	float per[10];

    public:
    void student()
    {
        cout << "Enter The Student : ";
        cin  >> n ;
        cout << endl;

        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The " << i << " Student Roll Number       : " ;
            cin  >> rollno[i] ;
        }
        cout << endl;

        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The Marks Of Maths " << i << " Student    : " ;
            cin  >> math[i] ;
        }
        cout << endl;


        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The Marks Of Science " << i << " Student  : " ;
            cin  >> sci[i] ;
        }
        cout << endl;


        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The Marks Of Physics " << i << " Student  : " ;
            cin  >> phy[i] ;
        }
        cout << endl;


        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The Marks Of English " << i << " Student  : " ;
            cin  >> eng[i] ;
        }
        cout << endl;


        for(i=1 ; i<=n ; i++)
        {
            cout << "Enter The Marks Of Gujarati " << i << " Student : " ;
            cin  >> guj[i] ;
        }
        cout << endl;
    }

};

class derived : public base
{
    public:
    void final()
    {

        for(i=1 ; i<=n ; i++)
        {
            total[i] = math[i] + sci[i] + phy[i] + eng[i] + guj[i] ;

            per[i] = (total[i]*100/500);
        }


        for(i=1 ; i<=n ; i++)
        {
            cout << "Student Roll Number [" << i << "] = " << rollno[i] << endl;
            cout << "Total Student Marks [" << i << "] = " << total[i] << endl;
            cout << "Percentage              = " << (float)per[i] << endl;
            cout << endl;
        }
    }
};

int main()
{
    derived a;
        a.student();
    a.final();


    return 0;
}

/*

Enter The Student : 5

Enter The 1 Student Roll Number       : 11
Enter The 2 Student Roll Number       : 12
Enter The 3 Student Roll Number       : 13
Enter The 4 Student Roll Number       : 14
Enter The 5 Student Roll Number       : 15

Enter The Marks Of Maths 1 Student    : 78
Enter The Marks Of Maths 2 Student    : 85
Enter The Marks Of Maths 3 Student    : 98
Enter The Marks Of Maths 4 Student    : 79
Enter The Marks Of Maths 5 Student    : 64

Enter The Marks Of Science 1 Student  : 86
Enter The Marks Of Science 2 Student  : 57
Enter The Marks Of Science 3 Student  : 76
Enter The Marks Of Science 4 Student  : 68 
Enter The Marks Of Science 5 Student  : 73

Enter The Marks Of Physics 1 Student  : 65 
Enter The Marks Of Physics 2 Student  : 95
Enter The Marks Of Physics 3 Student  : 67
Enter The Marks Of Physics 4 Student  : 84
Enter The Marks Of Physics 5 Student  : 86

Enter The Marks Of English 1 Student  : 95
Enter The Marks Of English 2 Student  : 78  
Enter The Marks Of English 3 Student  : 94
Enter The Marks Of English 4 Student  : 76 
Enter The Marks Of English 5 Student  : 53

Enter The Marks Of Gujarati 1 Student : 76
Enter The Marks Of Gujarati 2 Student : 74
Enter The Marks Of Gujarati 3 Student : 84
Enter The Marks Of Gujarati 4 Student : 96
Enter The Marks Of Gujarati 5 Student : 68

Student Roll Number [1] = 11
Total Student Marks [1] = 400
Percentage              = 80

Student Roll Number [2] = 12
Total Student Marks [2] = 389
Percentage              = 77

Student Roll Number [3] = 13
Total Student Marks [3] = 419
Percentage              = 83

Student Roll Number [4] = 14
Total Student Marks [4] = 403
Percentage              = 80

Student Roll Number [5] = 15
Total Student Marks [5] = 344
Percentage              = 68

*/
