#include<stdio.h>

int main()
{
    char str[1000];
    int i;
    
   // printf("Enter the string ");
   // gets(str);
   
   printf("Enter the string: ");
   scanf("%s",str);
    
   printf("%s \n",str);
   //puts(str2);

    i=0;
    
    while(str[i]!='\0'){
        
        i++;
    }
    
    printf("the character in this string : %d",i);
    
    return 0; 
}


/*  output
 
Enter the string: het
het 
the character in this string : 3

 

*/
