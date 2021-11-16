#include <stdio.h>

#define max 25

int  fibonacci(int N);

void main () {
    int n;

    printf("Enter the number of Fibonacci:  ");
    scanf("%d", &n);
    
    printf("%d \n", fibonacci(n));
}

int fibonacci(int N) {
    
    int F[max];

    F[0] = 1, F[1] = 1;
    
    for (int i = 2; i <= max; i++)
        F[i] = F[i - 1] + F[i - 2];    
    
    return F[N];
} 
