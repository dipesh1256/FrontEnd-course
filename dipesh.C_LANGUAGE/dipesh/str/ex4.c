#include<stdio.h>

int main()
{
    char str1[1000];
	char str2[1000];
    int i,j;
   
   printf("Enter the string 1: ");
   gets(str1);
    
   printf("Enter the string 2: ");
   gets(str2);
   


	// for count the first string length
    i=0;
    
    while(str1[i]!='\0'){
        
        i++;
    }
    printf("The lanth of string 1: %d\n",i);
    
	
	// for count the second string length
	j=0;
	
	while(str2[j]!='\0'){
        
        j++;
    }
    printf("The lanth of string 2: %d",j);
       
   
   // printf both with combination 
    for(j=0; str2[j]!='\0'; j++, i++){
        
        str1[i]=str2[j];
    }
	
	printf("\n %s",str1);
    
    return 0; 
}


/*
 output

Enter the string 1: het
Enter the string 2: lathiya
The lanth of string 1: 3
The lanth of string 2: 7
 
 hetlathiya



*/
