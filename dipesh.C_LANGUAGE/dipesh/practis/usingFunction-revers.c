// using function revres number...

#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return reversedNum;
}


int main() {
    int number;
 
 
printf("Enter a number to reverse: ");
    scanf("%d", &number);


    int reversedNumber = reverseNumber (number);
    
    
 printf("Reversed Number: %d",  reversedNumber);

return 0;

}