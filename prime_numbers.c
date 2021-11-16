#include <stdio.h>

#define N 1000

void main() {
    
    int index, jdex, arr[N + 1];

    for ( arr[1] = 0, index = 2; index <= N; index++) arr[index] = 1;
    for ( index = 2; index <= N / 2; index++)
        for (jdex = 2; jdex <= N / index; jdex++)
           arr[index * jdex] = 0;
    for (index = 1; index <= N; index++)
       if (arr[index]) printf("%4d", index);
   printf("\n"); 
}
