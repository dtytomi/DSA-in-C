#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;                /* data item for this node */
    struct node *next;      /* pointer to the next node */
};

void main() {
    
    int N, M;   /* N: number of people, M: arragement for execution in the list */
    struct node *t, *x;
    
    printf("Input the value for N, and M:   ");
    scanf("%d %d", &N, &M);
    
    /* create first element of the list*/
    t = (struct node *) malloc(sizeof *t);
    t->key = 1;
    
    /* initialize x using t 
     * x holds onto the begining of the 
     * list */
    x = t;

    /* assign values to other element in the list */
    for (int i = 0; i <= N; i++) {
        
        t->next = (struct node *) malloc(sizeof *t);
        t = t->next;
        t->key = i;
    }

    t->next = x;

    while (t != t->next) {
        for (int i = 0; i <= N; i++) t = t->next;
        printf("%d", t->next->key);
        x = t->next;
        t->next = t->next->next;
        free(x);
    }

    printf("%d\n", t->key);

}
