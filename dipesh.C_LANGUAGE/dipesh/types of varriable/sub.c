#include<stdio.h>

int entmarks(){
int marks;

    printf("enter the marks :");
    scanf("%d",&marks);

        return marks;

}

int totalm(){
int total=0;
    for(int i=1; i<=5; i++){
        total+=entmarks();
    }
    return total;
}

float per(int total ){

    float pers;
    pers=total*0.20;

    return pers;


}

int main (){

    int total=totalm();
    printf("%d \n",total);
    
    float pers=per(total);
    printf("%0.2f",pers);
    
    return 0;

}