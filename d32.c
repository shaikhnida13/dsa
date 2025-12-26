#include <stdio.h>
#include <stdlib.h>
struct node {
    int row;
    int col;
    int value;
    struct node *next;
};
struct node *head = NULL;
void insert(int r, int c, int v)
 {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->row = r;
    newnode->col = c;
    newnode->value = v;
    newnode->next = NULL;
   if (head == NULL)
 {
        head = newnode;
    }
 else
 {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}
void display()
 {
    struct node *temp = head;
     if (temp == NULL)
 {
        printf("Sparse matrix is empty\n");
        return;
    }
  printf("\nSparse Matrix Representation (Row Col Value):\n");
  printf("Row  Col  Value\n");
  while (temp != NULL)
 {
        printf("%d    %d     %d\n", temp->row, temp->col, temp->value);
        temp = temp->next;
    }
}
int main()
 {
    system("getmac");
    int rows, cols, i, j, value;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter matrix elements:\n");
  for (i = 0; i < rows; i++)
 {
        for (j = 0; j < cols; j++)
 {
            scanf("%d", &value);
            if (value != 0)
 {
                insert(i, j, value);
            }
        }
    }
display();
return 0;
}
