#include<iostream>
#include<string.h>

using namespace std;

// class base{
//  public:
//     string name, contact;
//     public:
//      void get_info()
//      {
//           cout<<"\n\t\t----------------- 'MR. PATEL FATION'----------------- \n";
//           cout<<"Enter your Name : ";
//           cin>>name;
//           cout<<"Enter your Contact Number : ";
//           cin>>contact;
//      }

// };

class customer  
{
     protected:
    string name,contact;
    public:
     void get_info()
     {
          cout<<"\n\t\t----------------- 'MR. PATEL FATION'----------------- \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact;
     }

     void show_info()
     {

          cout<<"\n\t\t----------------- 'MR. PATEL FATION'----------------- \n";
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact<<endl;
     }

};


class Show_bill : public customer 
{

    protected :   

      double  GST_SGST  ,  disc , Net_bill,bill_amt =0 ;
      int   Bill =0 , quty[16] , a,amnt[16];

      string Ditems[16];

     public :


      int item1()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty [0];
         cout<<"Qunatity\t "<<quty[0]<<endl;
         Ditems[0] = "  BOY -PLAIN T-SHART = 500 ";
         amnt[0]=quty[0]*500;
         return Bill = Bill + amnt[0];
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[1];
         cout<<"Qunatity \t"<<quty[1]<<endl;
         Ditems[1] = "  BOY -FANCY T-SHART  = 700 ";
         amnt[1]= quty[1]*700;
         return Bill = Bill + amnt[1];
      }
      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[2];
         cout<<"Qunatity \t"<<quty[2]<<endl;
         Ditems[2] = " BOY -PLAIN SHART  = 600";
         amnt[2]=quty[2]*600;
         return Bill = Bill + amnt[2];
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty[3];
         cout<<"Qunatity \t"<<quty[3]<<endl;
         Ditems[3] = " BOY -FANCY SHART  = 1200";
         amnt[3]=quty[3]*1200;
         return Bill = Bill +amnt[3];
      }

     
      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[4];
         cout<<"Qunatity \t"<<quty[4]<<endl;
         Ditems[4] = " BOY -JECET   = 1500";
         amnt[4]=quty[4]*1500;
         return Bill = Bill + amnt[4];
      }
       int item6()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[5];
         cout<<"Qunatity "<<quty[5]<<endl;
         Ditems[5] = "GIRL - T-SHART   = 450";
         amnt[5]=quty[5]*450;
         return Bill = Bill +amnt[5];
      }

       int item7()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[6];
         cout<<"Qunatity "<<quty[6]<<endl;
         Ditems[6] = " GIRL - FANCY T-SHART   = 700";
         amnt[6]=quty[6]*700;
         return Bill = Bill + amnt[6];
      }

       int item8()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[7];
         cout<<"Qunatity "<<quty[7]<<endl;
         Ditems[7] = "GIRL - SHART   = 600";
         amnt[7]=quty[7]*600;
         return Bill = Bill + amnt[7];
      }

       int item9()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[8];
         cout<<"Qunatity "<<quty[8]<<endl;
         Ditems[8] = "GIRL - FANCY - SHART   = 1800";
         amnt[8]=quty[8]*1800;
         return Bill = Bill + amnt[8];
      }

       int item10()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[9];
         cout<<"Qunatity "<<quty[9]<<endl;
         Ditems[9] = "GIRL - JECET   = 2000";
         amnt[9]=quty[9]*2000;
         return Bill = Bill + amnt[9];
      }

       int item11()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[10];
         cout<<"Qunatity "<<quty[10]<<endl;
         Ditems[10] = " BOY -PENT - SIMPLE   = 1500";
         amnt[10]=quty [10]*1500;
         return Bill = Bill + amnt[10];
      }

       int item12()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[11];
         cout<<"Qunatity "<<quty[11]<<endl;
         Ditems[11] = " BOY -PENT - JEANS   = 2000";
         amnt[11]=quty[11]*2000;
         return Bill = Bill + amnt[11];
      }

       int item13()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[12];
         cout<<"Qunatity "<<quty[12]<<endl;
         Ditems[12] = " BOY -PENT - FANCY  = 2500";
         amnt[12]=quty[12]*2500;
         return Bill = Bill + amnt[12];
      }

       int item14()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[13];
          cout<<"Qunatity "<<quty[13]<<endl;
         Ditems[13] = "GIRL - PENT - SIMPLE   = 1500";
         amnt[13]=quty[13]*1500;
         return Bill = Bill + amnt[13];
      }


       int item15()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[14];
          cout<<"Qunatity "<<quty[14]<<endl;
         Ditems[14] = "GIRL - PENT -JEANS   = 2000";
         amnt[14]=quty[14]*2000;
         return Bill = Bill + amnt[14];
      }

      
       int item16()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty[15];
         cout<<"Qunatity "<<quty[15]<<endl;
         Ditems[15] = "GIRL - PENT FOEMAL   = 2500";
         amnt[15]=quty[15]*2500;
         return Bill = Bill + amnt[15];
      }
      // int choice()
      
      // {
      //    for(i=0; i<=16; i++)
      //    {
      //       i++;
      //       cout<<quty<< i<<endl;
      //    }
      //   // cout<<quty<<endl;
         

      // }


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

         for(i=0;i<16;i++)
            {
                if(!Ditems[i].empty())
                    {
                        cout<<"\n\t "<<i+1<<":"<<Ditems[i]<< " \n  quntyty = "<<quty[i]<<"\t Amount  = "<<amnt[i]<<endl;
                    }
            }
      }

};


int main ()
{

     Show_bill a ;
     

        a.get_info();
        

        cout<<"\n ---------- Menu ---------- \n";
        cout<<"\n   [1]    BOY - PLAIN T-SHART                   : RS. 500 /- "; 
        cout<<"\n   [2]    BOY - FANCY T-SHART                   : RS. 700 /- "; 
        cout<<"\n   [3]    BOY - PLAIN SHART                     : RS. 600 /- "; 
        cout<<"\n   [4]    BOY - FANCY SHART                     : RS. 1200 /- ";
        cout<<"\n   [5]    BOY -  JECET                          : RS. 1500 /- ";
        cout<<"\n   [6]    GIRL - PLAIN T-SHAET                  : RS. 450 /- ";
        cout<<"\n   [7]    GIRL - FATION T-SHAET                 : RS. 700 /- ";
        cout<<"\n   [8]    GIRL - PLAIN  SHAET                   : RS. 600 /- ";
        cout<<"\n   [9]    GIRL - FATION SHART                   : RS. 1800 /- ";
        cout<<"\n   [10]   GIRL - JECET                          : RS. 2000 /- ";
        cout<<"\n   [11]   BOY -  PENT - SIMPLE                  : RS. 1500 /- ";
        cout<<"\n   [12]   BOY - PENT - JEANS                    : RS. 2000 /- ";
        cout<<"\n   [13]   BOY - PENT - FANCY                    : RS. 2500 /- ";
        cout<<"\n   [14]   GIRL - PENT -  SIMPLE                 : RS. 1500 /- ";
        cout<<"\n   [15]   GIRL - PENT -    JEANS                : RS. 2000 /- ";
        cout<<"\n   [16]   GIRL - PENT -   FANCY                 : RS. 1500 /- \n";

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
        case 7: 
            a.item7();
               
            break;
        case 8: 
            a.item8();

               
            break;
        case 9: 
            a.item9();

             break;
        case 10: 
            a.item10();

             break;
        case 11: 
            a.item11();

             break;
        case 12: 
            a.item12();

             break;
        case 13: 
            a.item13();

             break;
        case 14: 
            a.item14();

             break;
        case 15: 
            a.item15();

             break;
        case 16: 
            a.item16();

            break;

        case 0: 
           break;
        }

      } while (i!=0);


            a.show_info();
            a.Show_Net_Bill();

            cout<<" ---------- Thank you ----------";


}
