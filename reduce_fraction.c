#include <stdio.h>

int gcd (int u, int v);

void main() {
    
   int x, y;

    printf("Welcome to Greatest Common Divisor\n");
    printf("Input two positive integer you want to check their GCD \n");   
    while (scanf("%d %d", &x, &y) != EOF)
        
        if (x > 0 && y > 0)
           printf("gcd for: %d %d is  %d\n", x, y, gcd(x, y)); 

}

int gcd (int u, int v) {
    
    int temp;

    while (u > 0) {
        
        if (u < v) {
            temp = u;
            u = v;
            v = temp;
        }

        u = u % v;
    }

    return v;

}

