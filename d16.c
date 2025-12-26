#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff;
    int exp;
    struct Node *next;
};
struct Node *head = NULL;
void insertTerm(int c, int e)
 {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;
 if (head == NULL)
 {
        head = newNode;
    } else
 {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void display()
 {
    struct Node *temp = head;
   printf("Polynomial: ");
    while (temp != NULL)
 {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

int main()
 {
    int n, i, c, e;
    system("getmac");
   printf("Enter number of terms: ");
   scanf("%d", &n);
  for (i = 0; i < n; i++)
 {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &c, &e);
        insertTerm(c, e);
    }
   display();
  return 0;
}
