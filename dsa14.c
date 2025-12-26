#include <stdio.h>
#include<stdlib.h>
int main()
 {
    system("getmac");
    int n, pos;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter position of insertion/deletion: ");
    scanf("%d", &pos);
    printf("Array insertion operations: %d\n", n - pos);
    printf("Array deletion operations: %d\n", n - pos - 1);
    printf("Linked list insertion operations: 1\n");
    printf("Linked list deletion operations: 1\n");
  return 0;
}
