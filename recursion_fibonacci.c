#include <stdio.h>

int  fibonacci(int N);

void main () {
    int n;

    printf("Enter the number of Fibonacci:  ");
    scanf("%d", &n);
    
    printf("%d \n", fibonacci(n));
}

int fibonacci(int N) {
    

    if (N <= 1) return 1;
    return fibonacci(N - 1) + fibonacci(N -2);
} 
