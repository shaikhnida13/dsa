#include <stdio.h>
#include <stdlib.h>
int main()
 {
   system(“getmac”);
    int i, n = 5;
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(n * sizeof(int));
    ptr2 = (int *)calloc(n, sizeof(int));
   printf("Values after malloc():\n");
    for (i = 0; i < n; i++)
 {
 printf("%d ", ptr1[i]);
    }
  printf("\n\nValues after calloc():\n");
    for (i = 0; i < n; i++)
{
     printf("%d ", ptr2[i]);
    }
  free(ptr1);
   free(ptr2);
  return 0;
}
