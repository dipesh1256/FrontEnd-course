#include <iostream>
using namespace std;

// Multiple Inheritance:
class Base1
{
    protected:
    char str[100];
    public:
    void SetA()
    {
        cout <<"Enter String: ";
        cin.getline (str,100);
    }
};

class Base2 
{
    protected:
    char str2[100];
    public:
    void SetB()
    {
        cout <<"Enter String2: ";
        cin.getline (str2,100);
    }
};

class Derived : public Base1, public Base2
{
    public:
    void GetData()
    {
        int i=0;
        while (str[i] != '\0')
        {
            i++;
        }
        cout <<"Length of String is: " <<i <<endl;
        for (int j=0; j<str2[j]!='\0' ; j++,i++)
        {
            str[i]=str2[j];
        }
        str[i]='\0';

        cout <<"New String is: " <<str ;
    }
};


// MultiLevel Inheritance:
// class Base1
// {
//     protected:
//     char str[100], str2[100];
//     public:
//     void SetA()
//     {
//         cout <<"Enter String: ";
//         cin.getline (str,100);
//         cout <<"Enter String2: ";
//         cin.getline (str2,100);
//     }
// };

// class Base2 : public Base1
// {
//     protected:
//     int i=0;
//     public:
//     void SetB()
//     {
//         while (str[i] != '\0')
//         {
//             i++;
//         }
//         cout <<"Length of String is: " <<i <<endl;
//     }
// };

// class Derived : public Base2
// {
//     public:
//     void GetData()
//     {
//         for (int j=0; j<str2[j]!='\0' ; j++,i++)
//         {
//             str[i]=str2[j];
//         }
//         str[i]='\0';

//         cout <<"New String is: " <<str ;
//     }
// };


int main()
{
    Derived d;

    d.SetA();
    d.SetB();
    d.GetData();
}



/*

Enter String: Raj 
Enter String2: Kanani
Length of String is: 4
New String is: Raj Kanani

*/