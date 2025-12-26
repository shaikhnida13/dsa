#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void deleteBeg()
 {
    if (!head) return;
    struct Node *t = head;
    head = head->next;
    free(t);
}
void deleteEnd()
 {
    if (!head) return;
    if (!head->next) { free(head); head = NULL; return; }
    struct Node *t = head;
    while (t->next->next) t = t->next;
    free(t->next);
    t->next = NULL;
}
void deleteMid(int pos)
 {
    if (!head || pos == 1) {
 deleteBeg();
 return;
 }
  struct Node *t = head;
    for (int i = 1; i < pos - 1 && t->next; i++)
        t = t->next;
    if (!t->next) return;
    struct Node *del = t->next;
    t->next = del->next;
    free(del);
}
void display()
{
    for (struct Node *t = head; t; t = t->next)
        printf("%d -> ", t->data);
    printf("NULL\n");
}
int main()
{
     head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;
    deleteBeg();
    deleteMid(1);
    deleteEnd();
   display();
    return 0;
}
