#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert()
 {
    int x;
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value to insert: ");
    scanf("%d", &x);
    newNode->data = x;
    newNode->next = head;
    head = newNode;
    printf("Inserted successfully\n");
}
void traverse() {
    struct Node *temp = head;
    if (head == NULL)
 {
        printf("List is empty\n");
        return;
    }
printf("Linked List: ");
    while (temp != NULL)
 {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void delete()
 {
    struct Node *temp;
    if (head == NULL)
 {
        printf("List is empty, cannot delete\n");
        return;
    }
  temp = head;
    head = head->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}
int main()
 {
    int choice;
    system("getmac");
  do
 {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
{
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: traverse(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    }
while (choice != 4);
 return 0;
}
