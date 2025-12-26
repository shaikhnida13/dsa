#include <stdio.h>
#include<stdlib.h>
#define SIZE 2
int queue[SIZE];
int front = -1, rear = -1;
void enqueue()
 {
    int x;
    if (rear == SIZE - 1) {
      printf("Queue Overflow\n");
    }
else {
        printf("Enter element to insert: ");
        scanf("%d", &x);
        if (front == -1)
            front = 0;
        queue[++rear] = x;
        printf("Inserted successfully\n");
    }
}
void dequeue() {
    if (front == -1 || front > rear)
 {
        printf("Queue Underflow\n");
    }
 else {
        printf("Deleted element: %d\n", queue[front++]);
    }
}
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    }
 else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main() {
    int choice;
    system("getmac");
  do {
        printf("\n--- Regular Queue Menu ---\n");
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
    }
     while (choice != 4);
     return 0;
}
