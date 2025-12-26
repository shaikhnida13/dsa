#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct Node
 {
    int data;
    struct Node *next;
};
struct Node *top = NULL;
int count = 0;
void push()
 {
    int x;
    struct Node *newNode;
    if (count == MAX)
 {
        printf("Stack Overflow (Size limit reached)\n");
        return;
    }
   newNode = (struct Node *)malloc(sizeof(struct Node));
   printf("Enter value to push: ");
   scanf("%d", &x);
   newNode->data = x;
   newNode->next = top;
   top = newNode;
   count++;
   printf("Pushed successfully\n");
}
void pop()
 {
    struct Node *temp;
  if (top == NULL)
 {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
  count--;
}
void display()
 {
    struct Node *temp = top;
   if (top == NULL)
 {
        printf("Stack is empty\n");
        return;
    }
  printf("Stack elements:\n");
   while (temp != NULL)
 {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
 {
    int choice;
    system("getmac");
 do
 {
        printf("\n--- Stack Using Linked List (Size = %d) ---\n", MAX);
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       switch (choice)
 {
            case 1: push();  break;
            case 2: pop();  break;
           case 3: display();break;
           case 4: printf("Exiting...\n");  break;
            default: printf("Invalid choice\n");
        }
}
 while (choice != 4);
 return 0;
}
