#include <stdio.h>
#include<stdlib.h>
int main()
 {
    system("getmac");
    int tree[7] = {10, 20, 30, 40, 50, 60, 70};
    int i;
    printf("Binary Tree using Array Representation:\n");
    printf("Index : Value\n");
    for (i = 0; i < 7; i++)
 {
        printf("%d : %d\n", i, tree[i]);
    }
     printf("\nRoot Node: %d\n", tree[0]);
     printf("Left Child of Root: %d\n", tree[1]);
    printf("Right Child of Root: %d\n", tree[2]);
    return 0;
}
