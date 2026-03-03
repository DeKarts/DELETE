#include <stdio.h>
#include <stdlib.h>

typedef struct node { int val; struct node *next; } node;

int main() {
    node *head = NULL, *tail = NULL;
    for (int i = 1; i <= 5; i++) {
        node *n = malloc(sizeof(node));
        n->val = i; n->next = NULL;
        if (!head) head = tail = n;
        else { tail->next = n; tail = n; }
    }
    for (node *p = head; p; p = p->next) printf("%d ", p->val);
    while (head) { node *t = head; head = head->next; free(t); }
    return 0;
}
