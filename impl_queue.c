#include <stdio.h>

extern  void queueinit();
extern  void put(int v);
extern  int get();
extern  int queueempty();

void main() {

    char c;

    for (queueinit(); scanf("%1s", &c) != EOF;) {
        
        if (c == ')') printf("%1c", (char) get());
        if (c == '=') put((int) c);
        if (c == ')') put((int) c);
        while (c >= '0' && c <= '9') {
            printf("%1c", c);
            scanf("%1c", &c);
        } 
    
        if (c != '(') printf(" ");
    }

    printf("\n");
}
