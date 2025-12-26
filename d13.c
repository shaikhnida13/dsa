#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct Node {
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
int count = 0;
void enqueue()
 {
    int x;
    struct Node *newNode;
   if (count == MAX)
 {
        printf("Queue Overflow (Size limit reached)\n");
        return;
    }
  newNode = (struct Node *)malloc(sizeof(struct Node));
   if (newNode == NULL)
 {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);
   newNode->data = x;
    newNode->next = NULL;
   if (rear == NULL)
 {
        front = rear = newNode;
    }
 else {
        rear->next = newNode;
        rear = newNode;
    }
  count++;
   printf("Element inserted\n");
}
void dequeue()
 {
    struct Node *temp;
    if (front == NULL)
 {
        printf("Queue Underflow\n");
        return;
    }
   temp = front;
    printf("Deleted element: %d\n", temp->data);
    front = front->next;
    if (front == NULL)
    rear = NULL;

    free(temp);
    count--;
}
void display()
 {
    struct Node *temp = front;
   if (front == NULL)
 {
    printf("Queue is empty\n");
    return;
    }
   printf("Queue elements: ");
   while (temp != NULL)
{
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
 {
    int choice;
    system("getmac");
do
 {
        printf("\n--- Queue Using Linked List (Size = %d) ---\n", MAX);
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
  switch (choice)
 {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);
return 0;
}
