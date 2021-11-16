#include <stdlib.h>

struct node {
    int key; 
    struct node *next;
};

static struct node *head, *z, *t;

void stackinit() {
    
    head = (struct node *) malloc(sizeof *head);
    z = (struct node *) malloc(sizeof *z);

    head->next = z;
    z->next = z;
}

void push (int v) {
    
    t = (struct node *) malloc(sizeof *t);
    t->key = v;
    t->next = head->next;
    head->next = t;
}

int pop() {
    
    int x;
    t->next = head->next;
    head->next = t;
    x = t->key;
    free(t); 
    return x;
}

int stackempty() {
    
    return head->next == z;
}
