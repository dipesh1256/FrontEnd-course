#include <iostream>
using namespace std;

class Book
{
    private:
        int bookno, n, cost;
        char booktitle[20];
        float price;

        float TOTAL_COST(int n)
        {
            cost = n * price;
            return cost;
        }
    public:
        Book()
        {
            cout <<"Book Number: ";
            cin >> bookno;
            cout <<"Book Title: ";
            cin.get();
            cin.getline(booktitle,20);
            cout <<"Numbers of books Copy: ";
            cin >> n;
            cout <<"Price of One Book: ";
            cin >> price;

            cost = TOTAL_COST(n);
        }
    void PURCHASE()
    {
        cout <<"Book Number: " << bookno <<endl;
        cout <<"Book Number: " << booktitle <<endl;
        cout <<"Numbers of books Copy: " << n <<endl;
        cout <<"Price of One Book: " << price <<endl;
        cout <<"Cost of Total Book: " << cost;
    }
};


int main()
{
    Book b;

    cout <<endl;
    b.PURCHASE();

    return 0;
}




/*
5. Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies where N
is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOK TITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user.


OUTPUT:

Book Number: 10
Book Title: Raj
Numbers of books Copy: 80
Price of One Book: 15

Book Number: 10
Book Number: Raj
Numbers of books Copy: 80
Price of One Book: 15
Cost of Total Book: 1200

*/