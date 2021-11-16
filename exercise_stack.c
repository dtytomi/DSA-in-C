#include <stdio.h>

extern  void stackinit();
extern  void push (char v);
extern  int pop();
extern  int stackempty();

void main() {

    char c;

    for (stackinit(); scanf("%1s", &c) != EOF;) {
        
        if (c == '*') printf("%1c", (char) pop());
        if (c >= 'A' && c <= 'Z') push((char) c);
        while (c >= 'A' && c <= 'Z') {
            printf("%1c", c);
            scanf("%1c", &c);
        } 
    }

    printf("\n");
}
