#include <stdio.h>

int  factorial(int N);

void main () {
    int n;

    printf("Enter the number of Factorial:  ");
    scanf("%d", &n);
    
    printf("%d \n", factorial(n));
}

int factorial(int N) {
    

    if (N == 0) return 1;
    return N * factorial(N -1);
} 
