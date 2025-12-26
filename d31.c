#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
int isFull()
 {
    if ((rear + 1) % MAX == front)
        return 1;
    else
        return 0;
}
int isEmpty()
 {
    if (front == -1)
        return 1;
    else
        return 0;
}
void enqueue(int value)
 {
    if (isFull()) {
        printf("Queue is FULL. Cannot enqueue %d\n", value);
        return;
    }
  if (isEmpty())
 {
        front = rear = 0;
    }
else
 {
        rear = (rear + 1) % MAX;
    }
   queue[rear] = value;
    printf("Enqueued: %d\n", value);
}
void dequeue()
{
    if (isEmpty()) {
        printf("Queue is EMPTY. Cannot dequeue\n");
        return;
    }
  printf("Dequeued: %d\n", queue[front]);
  if (front == rear)
 {
        front = rear = -1;
    }
else
 {
        front = (front + 1) % MAX;
    }
}
void display()
 {
    int i;
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
        return;
    }
  printf("Queue elements: ");
    i = front;
    while (1)
 {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
int main()
 {
    system("getmac");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
  display();
 enqueue(60);
 dequeue();
 dequeue();
 display();
 enqueue(60);
 enqueue(70);
display();
 return 0;
}
