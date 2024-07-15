#include<stdio.h>

int main()
{
    char str[1000];
    int i,j;
    
   // printf("Enter the string ");
   // gets(str);
   printf("\n");
   
   printf("Enter the string: ");
   scanf("%s",str);
    
   printf("%s \n",str);
   //puts(str2);

    i=0;
    printf("\n");
    
    
    while(str[i]!='\0'){
        
        i++;
    }
    printf("The lanth  Of string :%d \n",i);
    
    
    while(i>=0){
        printf("%c \n",str[i]);
        i--;
    }
    
    
    
   /* for(j=i; j>=0; j--){
        
        printf("%c",str[i]);
    }
    */
    return 0; 
}


/*
 output

Enter the string: hey
hey 
 3 
 y e h

*/
