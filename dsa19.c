#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* queue[20];
int front = -1, rear = -1;
void enqueue(struct Node* temp)
 {
    if (front == -1)
        front = 0;
    queue[++rear] = temp;
}
struct Node* dequeue()
 {
    return queue[front++];
}
struct Node* createNode(int data)
 {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
int main()
 {
    system("getmac");
    struct Node *root, *temp;
    int n, i, data;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter node values:\n");
    scanf("%d", &data);
    root = createNode(data);
    enqueue(root);
    for (i = 1; i < n; i++) {
   scanf("%d", &data);
   temp = createNode(data);
   struct Node* parent = queue[front];
   if (parent->left == NULL)
 {
            parent->left = temp;
        }
else
 {
            parent->right = temp;
            dequeue();
        }
        enqueue(temp);
    }
    printf("Binary tree constructed using queue.\n");
    printf("Root: %d\n", root->data);
    printf("Left child: %d\n", root->left->data);
    printf("Right child: %d\n", root->right->data);
   return 0;
}
