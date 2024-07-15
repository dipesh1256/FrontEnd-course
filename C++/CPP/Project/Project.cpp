#include<iostream>
#include<string.h>

using namespace std;

class customer  
{
    protected:
    string name,contact;
    public:
    void get_info()
    {
        cout<<"\n\t\t----------------- 'Raj Restaurant'----------------- \n";
        cout<<"Enter your Name : ";
        cin>>name;
        cout<<"Enter your Contact Number : ";
        cin>>contact;
    }

    void show_info()
    {

        cout<<"\n\t\t----------------- 'Raj Restaurant'----------------- \n";
        cout<<"\n\t Name               : "<<name<<endl;
        cout<<"\n\t Contact Number     : "<<contact<<endl;
    }

};


class Show_bill : public customer 
{

    protected :   

    double  GST_SGST  ,  disc , Net_bill,bill_amt =0 ;
    int   Bill =0 , quty[6] , a,amnt[6];

    string Ditems[6];

    public :


    int item1()
    {
    cout<<"\n \tEnter Qunatity : ";
    cin>>quty [0];
    cout<<"Qunatity\t "<<quty[0]<<endl;
    Ditems[0] = " Plain Dosa ______________________________ 50 ";
    amnt[0]=quty[0]*50;
    return Bill = Bill + amnt[0];
    }

    int item2()
    {
        cout<<"\n \tEnter Qunatity : "; 
        cin>>quty[1];
        cout<<"Qunatity \t"<<quty[1]<<endl;
        Ditems[1] = " Cheese Plain Dosa ___________________ 70 ";
        amnt[1]= quty[1]*70;
        return Bill = Bill + amnt[1];
    }

    int item3()
    {
        cout<<"\n \tEnter Qunatity : "; 
        cin>>quty[2];
        cout<<"Qunatity \t"<<quty[2]<<endl;
        Ditems[2] = " Masala Dosa _________________________ 70";
        amnt[2]=quty[2]*70;
        return Bill = Bill + amnt[2];
    }

    int item4()
    {
        cout<<"\n \tEnter Qunatity : ";
        cin>>quty[3];
        cout<<"Qunatity \t"<<quty[3]<<endl;
        Ditems[3] = " Cheese Masala Dosa __________________ 90";
        amnt[3]=quty[3]*90;
        return Bill = Bill +amnt[3];
    }

    int item5()
    {
        cout<<"\n \tEnter Qunatity : "; 
        cin>>quty[4];
        cout<<"Qunatity \t"<<quty[4]<<endl;
        Ditems[4] = " Mysore Plain Dosa ___________________ 80";
        amnt[4]=quty[4]*80;
        return Bill = Bill + amnt[4];
    }

    int item6()
    {
        cout<<"\n \tEnter Qunatity : "; 
        cin>>quty[5];
        cout<<"Qunatity "<<quty[5]<<endl;
        Ditems[5] = " Cheese Mysore Masala Dosa ___________ 100";
        amnt[5]=quty[5]*100;
        return Bill = Bill +amnt[5];
    }



    double Show_Bill_Amt()
    { 
        return bill_amt = bill_amt + Bill;
    }

    double Show_disc()
    {
        if (bill_amt >  5000)
        {
            return disc = ( bill_amt *7  ) / 100; 
        }
        else 
        {
            return disc = 0;
        }
    }

    double Show_GST_CGST()
    {
         return  GST_SGST   = ( bill_amt * 5) / 100;  
    }

    double Show_Net_bill()
    {
        return Net_bill =   bill_amt +  GST_SGST - disc ;
    }

    void Show_Net_Bill()
    {
        Show_bill_Items();
        cout<<"\n\t TOTAL CHOICE  PRICE   : "<<Show_Bill_Amt()<<endl;
        cout<<"\n\t DISCOUNT              : "<<Show_disc() <<endl;
        cout<<"\n\t GST + CGST            : "<<Show_GST_CGST()<<endl;
        cout<<"\n\t NET BILL IS           : "<<Show_Net_bill()<<endl; 
        
    }


    void Show_bill_Items()
    {

        int i ;

        cout << "\t\tItems\t\t\t\t  Rate\t\tQuantity\tAmount" <<endl; 

        for(i=0;i<6;i++)
        {
            if(!Ditems[i].empty())
                {
                    cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<"\t\t  "<<quty[i]<<"\t\t"<<amnt[i]<<endl;
                }
        }
    }

};


int main ()
{

    Show_bill a ;

    a.get_info();

        cout<<"\n ---------- Menu ---------- \n";
        cout<<"\n   [1]    Plain Dosa __________________________ : RS. 50 /- "; 
        cout<<"\n   [2]    Cheese Plain Dosa ___________________ : RS. 70 /- "; 
        cout<<"\n   [3]    Masala Dosa _________________________ : RS. 70 /- "; 
        cout<<"\n   [4]    Cheese Masala Dosa __________________ : RS. 90 /- ";
        cout<<"\n   [5]    Mysore Plain Dosa ___________________ : RS. 80 /- ";
        cout<<"\n   [6]    Cheese Mysore Masala Dosa ___________ : RS. 100 /- ";

        cout<<" \n   Confirm Your Order :       [0]  \n";

    int i;

        do
        {
            cout<<"\n Enter your choice : ";
            cin>>i;
            switch (i)
            {
                case 1: 
                    a.item1();
                    break;

                case 2: 
                    a.item2();
                    break;

                case 3: 
                    a.item3(); 
                    break;

                case 4: 
                    a.item4();
                    break;

                case 5: 
                    a.item5();
                    break;

                case 6: 
                    a.item6();
                    break;

                case 0: 
                    break;
            }

        } while (i!=0);


            a.show_info();
            a.Show_Net_Bill();

            cout<<" ---------- Thank you ----------";

}