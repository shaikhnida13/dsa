#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertBeg(int x)
 {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = head;
    head = n;
}
void insertEnd(int x)
 {
    struct Node *n = malloc(sizeof(struct Node)), *t = head;
    n->data = x; n->next = NULL;
    if (!head) { head = n; return; }
    while (t->next) t = t->next;
    t->next = n;
}
void insertMid(int x, int pos)
{
    struct Node *n = malloc(sizeof(struct Node)), *t = head;
    for (int i = 1; i < pos && t; i++) t = t->next;
    if (!t) return;
    n->data = x;
    n->next = t->next;
    t->next = n;
}
void display() {
    for (struct Node *t = head; t; t = t->next)
        printf("%d -> ", t->data);
    printf("NULL\n");
}
int main()
 {
    system("getmac");
    insertBeg(10);
    insertEnd(30);
    insertMid(20, 1);
   display();
    return 0;
}
