#include<stdio.h>


    int math,phy,sci,guj,eng,eco,sns,hindi,pt,com;
    float per,total;
    char name[50];

void sname(){   

    printf("Enter the Name  of Student :");
	scanf("%s",&name);
    printf("the Name of Student is : %s",name);
    printf("\n\n");

}

void studentmarks(){


    printf("Enter the marks of Maths student :");
	scanf("%d",&math);
    printf("the marks of Maths : %d",math);
    printf("\n\n");

    printf("Enter the marks of Physics student :");
	scanf("%d",&phy);
    printf("the marks of Physics : %d",phy);
    printf("\n\n");

    printf("Enter the marks of Science student :");
	scanf("%d",&sci);
    printf("the marks of Science : %d",sci);
    printf("\n\n");

    printf("Enter the marks of Gujarati student :");
	scanf("%d",&guj);
    printf("the marks of Gujarati : %d",guj);
    printf("\n\n");

    printf("Enter the marks of English student :");
	scanf("%d",&eng);
    printf("the marks of English : %d",eng);
    printf("\n\n");

    printf("Enter the marks of Economics student :");
	scanf("%d",&eco);
    printf("the marks of Economics : %d",eco);
     printf("\n\n");

    printf("Enter the marks of Sanskrit student :");
	scanf("%d",&sns);
    printf("the marks of Sanskrit : %d",sns);
    printf("\n\n");

    printf("Enter the marks of Hindi student :");
	scanf("%d",&hindi);
    printf("the marks of Hindi : %d",hindi);
    printf("\n\n");

    printf("Enter the marks of P.T student :");
	scanf("%d",&pt);
    printf("the marks of P.T : %d",pt);
    printf("\n\n");

    printf("Enter the marks of Computer student :");
	scanf("%d",&com);
    printf("the marks of Computer : %d",com);
    printf("\n\n");

}

void totalmarks(){   


    total=math+phy+sci+guj+eng+eco+sns+hindi+pt+com;
    printf("The total Marks: %2.0f",total);
    printf("\n");

}

void pers(){   

   // per=total*100/1000; //(100/1000=0.10)
    per=total*0.10;
    printf("The Parcentage Of  : %2.0f",per);
   printf("\n");
    

}




int main()
{

    sname();
	studentmarks();
    totalmarks();
    pers();


	return 0;
}


/*

Enter the Name  of Student :mohit
the Name of Student is : mohit

Enter the marks of Maths student :78
the marks of Maths : 78

Enter the marks of Physics student :95
the marks of Physics : 95

Enter the marks of Science student :75
the marks of Science : 75

Enter the marks of Gujarati student :68
the marks of Gujarati : 68

Enter the marks of English student :85
the marks of English : 85

Enter the marks of Economics student :72
the marks of Economics : 72

Enter the marks of Sanskrit student :83
the marks of Sanskrit : 83

Enter the marks of Hindi student :91
the marks of Hindi : 91

Enter the marks of P.T student :97
the marks of P.T : 97

Enter the marks of Computer student :99
the marks of Computer : 99

The total Marks: 843
The Parcentage Of  : 84


 
*/
