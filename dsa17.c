#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
int main()
 {
    system("getmac");
    struct Node *root;
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 1;
    root->left = NULL;
    root->right = NULL;
    root->left = (struct Node *)malloc(sizeof(struct Node));
    root->left->data = 2;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = (struct Node *)malloc(sizeof(struct Node));
    root->right->data = 3;
    root->right->left = NULL;
    root->right->right = NULL;
    printf("Binary tree created successfully");
    return 0;
}
