/* Sructure => collection of difrent data types 

        Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
    Unlike an array, a structure can contain many different data types (int, float, char, etc.).

    */

 #include<stdio.h> 

 struct Student {
    int rollno,m,t,s,e;
    char name[50];
    float per;
 };

 int main (){

    struct Student a[5];
    int i;

    for(i=0; i<5; i++){

        printf("Enter Roll no : ");
        scanf("%d",&a[i].rollno);

        printf("Enter Name : ");
        scanf("%s",&a[i].name);

        printf("Enter  Maths Marks : ");
        scanf("%d",&a[i].m);

        printf("Enter  Science Marks : ");
        scanf("%d",&a[i].s);

        printf("Enter  English Marks : ");
        scanf("%d",&a[i].e);

        printf("\n");

    } 

    printf("\n RollNo\tName\tMaths\tScience\tEnglish\tTotal\tPercentage");

    for(i=0; i<5; i++){

        a[i].t=a[i].m + a[i].s + a[i].e ;
        a[i].per=a[i].t*(100/300);

        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f", a[i].rollno,a[i].name,a[i].m,a[i].s,
        a[i].e,a[i].t,a[i].per);

    }


    return 0;
 }


