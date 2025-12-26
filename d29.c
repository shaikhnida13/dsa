#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int value)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL)
 {
        head = newnode;
        return;
    }
  temp = head;
    while (temp->next != NULL)
        temp = temp->next;
        temp->next = newnode;
}
void delete(int value)
 {
    struct node *temp = head, *prev = NULL;
 if (head == NULL)
 {
        printf("List is empty\n");
        return;
    }
  if (head->data == value)
 {
        head = head->next;
        free(temp);
        return;
    }
   while (temp != NULL && temp->data != value)
 {
        prev = temp;
        temp = temp->next;
    }
  if (temp == NULL)
 {
        printf("Element not found\n");
        return;
    }
   prev->next = temp->next;
    free(temp);
}
void display()
 {
    struct node *temp = head;
    while (temp != NULL)
 {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
 {
    system("getmac");
    insert(10);
    insert(20);
    insert(30);
    insert(40);
   printf("Linked List after insertion:\n");
    display();
   delete(30);
   printf("Linked List after deletion:\n");
   display();
  return 0;
}
