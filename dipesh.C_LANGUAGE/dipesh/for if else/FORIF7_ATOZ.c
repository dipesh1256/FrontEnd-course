#include <stdio.h>

int main() {

    for (char i='A'; i <= 'Z'; ++i) {
        printf("%c  ", i);
    } 
    return 0;
}
    
/*
// When vlue by user

#include <stdio.h>

int main() {
    char n,m;
    
    printf("Enter A to Z any latter :");
    scanf("%c",&n);
    
    for (char i='A'; i <= n; i++) {
        printf("%c  ", i);
    }
    return 0;
}
    

  
  // When Start and End latter vlue by user 

#include <stdio.h>

int main() {
    char start, end;

    printf("Enter the starting character: ");
    scanf("%c", &start);

    printf("Enter the ending character: ");
    scanf(" %c", &end);

    printf("The English alphabet from %c to %c is: ", start, end);
    
    for (char c = start; c <= end; c++) {
        printf("%c ", c);
    }

    return 0;
}















*/