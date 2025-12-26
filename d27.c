#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
struct Node {
    int data;
    struct Node *next;
};
struct Node *last = NULL;
int count = 0;
void insert(int data)
 {
    if (count == SIZE)
{
        printf("List is full\n");
        return;
    }
   struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    if (last == NULL)
 {
        last = n;
        n->next = n;
    }
 else
 {
        n->next = last->next;
        last->next = n;
 last = n;
    }
    count++;
}
void deleteBeg()
 {
    if (last == NULL)
{
        printf("List is empty\n");
        return;
    }
 struct Node *t = last->next;
 if (t == last)
 {
        last = NULL;
    }
else
{
        last->next = t->next;
    }
    free(t);
    count--;
}
void display()
 {
    if (last == NULL)
 {
        printf("List is empty\n");
        return;
    }
  struct Node *t = last->next;
    do
 {
        printf("%d -> ", t->data);
        t = t->next;
    } while (t != last->next);
    printf("(back to head)\n");
    printf("Current size = %d\n", count);
}
int main()
{
    int choice, value;
    do {
          printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
          printf("Enter your choice: ");
          scanf("%d", &choice);
          switch (choice)
 {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                deleteBeg();
                break;

            case 3:
                display();
                break;
           case 4:
                return 0;
 }
    } while (1);
}
