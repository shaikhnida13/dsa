#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main() {
    system("getmac");
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 50;
    head->next = NULL;
    printf("Data = %d\n", head->data);
    free(head);
    return 0;
}
