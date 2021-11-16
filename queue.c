#include <stdlib.h>

struct node {
    int key;
    struct node *next;
};

static struct node *head, *tail, *t;

void queueinit() {
    
    head = (struct node *) malloc(sizeof *head);
    tail = (struct node *) malloc(sizeof *tail);

    tail->next = head;
    head->next = head;

}

void put(int v) {
    
    t = (struct node *) malloc(sizeof *t);
    t->key = v;
    t->next = tail->next;
    tail->next = t;
}

int get() {
    
    int x;
    t->next = head->next;
    head->next = t;
    x = t->key;
    free(t);
    return x;

}

int queueempty() {
    return head->next == tail;
}
