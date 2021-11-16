#include <stdio.h>

extern  void stackinit();
extern  void push (int v);
extern  int pop();
extern  int stackempty();

struct node {
    char info;
    struct node *l, *r;
};

struct node *x, *z;

void main() {

    char c;
    
    z = (struct node *) malloc(sizeof *z); 
    z -> l = z;
    z -> r = z;

    for (stackinit(); scanf("%1s", &c) != EOF;) {
        
        x = (struct node *) malloc(sizeof *x); 
        x -> info = c;
        x -> l = z;
        x -> r = z;

        if (c == ')') {
            x -> r = pop();
            x -> l = pop();
        }
        
        push(x);
        
    }

    printf("\n");
}
