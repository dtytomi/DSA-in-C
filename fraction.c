#include <stdio.h>

int gcd (int num, int den);

struct fraction {
    int numerator;
    int denominator;
};

void main() {
    
    printf("Reduced Fraction using gcd for 12 & 8 \n");
    
    struct fraction value = {12, 8};

    int divisor = gcd (value.numerator, value.denominator);

    int res_num = value.numerator / divisor;

    int res_den = value.denominator / divisor;

    printf("Fraction for 12/8 is: %d / %d \n", res_num, res_den);

}

int gcd (int num, int den) {
    
    int temp;

    while (num > 0) {
        
        if (num < den) {
            temp = num;
            num = den;
            den = temp;
        }

        num = num - den;
    
    }

    return den;
}
