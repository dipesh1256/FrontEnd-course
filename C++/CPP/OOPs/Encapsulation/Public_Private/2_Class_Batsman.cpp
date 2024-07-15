#include <iostream>
using namespace std;

class batsman
{
private:
    int bcode, innings, notout, runs, batavg;
    char bname[20];
    float total;

    int calcavg()
    {
        batavg = runs / (innings-notout);
        return batavg;
    }

public:
    void readdata()
    {
        cout <<"Enter the Batman 4 digits code number: ";
        cin >> bcode;
        cout <<"Enter the Batman-Name: ";
        cin.get();
        cin.getline(bname,20);
        cout <<"Enter the Innings: ";
        cin >> innings;
        cout <<"Enter the Notout: ";
        cin >> notout;
        cout <<"Enter the Runs: ";
        cin >> runs;
        batavg = calcavg();
    }
    
    void displaydata() {
        cout << "Batman 4 digits code number: " << bcode << endl;
        cout << "Batman Name: " << bname << endl;
        cout << "Innings: " << innings << endl;
        cout << "Notout: " << notout << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batavg: " << batavg << endl;
    }
};

int main()
{
    batsman s;
    
    s.readdata();
    cout <<endl;
    s.displaydata();

    return 0;
}




/*
2. Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
readdata() Function to accept value from bcode, name, innings, notout and
invoke the function
calcavg() to calculate.
displaydata() Function to display the data members on the screen.



OUTPUT:
Enter the Batman 4 digits code number: 1001
Enter the Batman-Name: Raj Kanani
Enter the Innings: 100
Enter the Notout: 90
Enter the Runs: 1050

Batman 4 digits code number: 1001
Batman Name: Raj Kanani
Innings: 100
Notout: 90
Runs: 1050
Batavg: 105

*/

