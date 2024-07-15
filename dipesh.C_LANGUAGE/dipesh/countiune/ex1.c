
// print this series like  A B C D E.....
#include <stdio.h>


int main()
{
    
    int a;
    
    for(a=65; a>=65 && a<=122; a++){
		
		
		if(a =='B' ||a == 'H'|| a == 'M' || a == 'S' || a == 'Z' ||     
        a =='r' || a == 'j'|| a == 't' || a == 'y' || a == 'k' || 
        a == 91 || a == 92 ||a == 93 || a == 94 || a == 95 || a == 96){    

            continue;
        }
        
        printf(" %c ",a);

	}
	

    return 0;
}


/*

a=5; b=10;

a=a+b  15

b=a-b 5

a=a-b 10

a=a*b 50
b=a/b 5
a=a/b 10 

a=a^b 97,65,625
b=a^b
a=a^b

#include <stdio.h>
int main()
{
int var1, var2, temp; 
printf("Enter two integersn");
scanf("%d%d", &var1, &var2);
printf("Before SwappingnFirst variable = %dnSecond variable = %dn", var1, var2); 
var1 = var1 ^ var2;
var2 = var1 ^ var2;
var1 = var1 ^ var2;
printf("After SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
return 0;
}



*/