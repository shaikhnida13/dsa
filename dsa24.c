#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* queue[20];
int front = 0, rear = -1;
void enqueue(struct Node* node)
 {
    queue[++rear] = node;
}
struct Node* dequeue()
 {
    return queue[front++];
}
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void levelOrder(struct Node* root)
 {
    enqueue(root);
    while (front <= rear)
{
        struct Node* temp = dequeue();
        printf("%d ", temp->data);

        if (temp->left)
            enqueue(temp->left);
        if (temp->right)
            enqueue(temp->right);
    }
}

int main()
 {
    system("getmac");
    int n, i, data;
    struct Node *root, *temp;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter root value: ");
    scanf("%d", &data);
    root = newNode(data);
    enqueue(root);
    for (i = 1; i < n; i++)
 {
        printf("Enter value: ");
        scanf("%d", &data);
        temp = newNode(data);
       struct Node* parent = queue[front];
  if (!parent->left)
            parent->left = temp;
        else
 {
            parent->right = temp;
            dequeue();
        }
        enqueue(temp);
    }
   front = 0;
   printf("Level Order Traversal: ");
   levelOrder(root);
   return 0;
}
