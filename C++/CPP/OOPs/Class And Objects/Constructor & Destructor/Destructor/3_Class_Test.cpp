#include <iostream>
using namespace std;

class Test
{
private:
    int TestCode, NoCandidates, CenterReqd;
    char Description[50];

    int CALCNTR()
    {
        return (NoCandidates/100+1);
    }

public:
    void SCHEDULE()
    {
        cout <<"TestCode: ";
        cin >> TestCode;
        cout <<"Description: ";
        cin.get();
        cin.getline(Description,50);
        cout <<"NoCandidate: ";
        cin >> NoCandidates;
        cout <<"CenterReqd: ";
        cin >> CenterReqd;

        CALCNTR();
    }


    ~Test()
    {
        cout <<"TestCode: " <<TestCode <<endl;
        cout <<"Description: " <<Description <<endl;
        cout <<"NoCandidates: " <<NoCandidates <<endl;
        cout <<"CenterReqd: " <<CenterReqd <<endl;
        cout <<"CALCNTR: " <<CALCNTR() <<endl;

    }
};

int main()
{
    Test T;
    
    T.SCHEDULE();
    cout <<endl;

    return 0;
}




/*
3. Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members


OUTPUT:
TestCode: 1004
Description: RAJ
NoCandidate: 8000
CenterReqd: 80

TestCode: 1004
Description: RAJ
NoCandidates: 8000
CenterReqd: 80
CALCNTR: 81

*/