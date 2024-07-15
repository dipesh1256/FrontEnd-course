
/*#include <stdio.h>

// Function to generate Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    int one  = 0, two = 1, three, i;

    printf("Fibonacci Sequence up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            three = i;
        } else {
            three = one + two;
            one = two;
            two = three;
        }
        printf("%d ", three);
    }
}

int main() {
    int n;

    // Get the number of terms from the user
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    // Generate and print the Fibonacci sequence
    generateFibonacci(n);

    return 0;
}
*/

  #include<stdio.h>
int fibo (int n){
    
   int a=1, b=0,c=0,i;
    
    for(i=1; i<n; i++){
          
            printf(" %d ",c);
            c=a+b;
            a=b;
            b=c;
             
        } 
}

int main (){
    
    int a;

        printf("Enter the number : ");
        scanf("%d",&a);
    
    
    fibo(a);
    
    return 0;
}