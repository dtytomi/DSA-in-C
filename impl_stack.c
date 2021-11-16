#include <stdio.h>

extern  void stackinit();
extern  void push (int v);
extern  int pop();
extern  int stackempty();

void main() {

    char c;

    for (stackinit(); scanf("%1s", &c) != EOF;) {
        
        if (c == ')') printf("%1c", (char) pop());
        if (c == '=') push((int) c);
        if (c == ')') push((int) c);
        while (c >= '0' && c <= '9') {
            printf("%1c", c);
            scanf("%1c", &c);
        } 
    
        if (c != '(') printf(" ");
    }

    printf("\n");
}
