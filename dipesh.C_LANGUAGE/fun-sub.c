
#include<stdio.h>

int math;
int guj;
int sci;
int phy;
int eng;
int total;
float per;


void stu(){


   printf("enter the marks of math student :");
   scanf("%d",&math);

   printf("enter the marks of guj student :");
   scanf("%d",&guj);

   printf("enter the marks of sci student :");
   scanf("%d",&sci);
 
  printf("enter the marks of phy student :");
  scanf("%d",&phy);

  printf("enter the marks of eng student :");
  scanf("%d",&eng);

}
 void tot(){
     
  total=math+phy+sci+guj+eng;
  printf("%d\n",total);
}

 void pear(){
     
 per=total*100/500;
 printf("per=%f",per);
}
 
 int main(){
     
     stu();
     tot();
     pear();
     
     return 0;
 }
 
 
 
 
 