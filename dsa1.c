#include <stdio.h>
#include <stdlib.h>
int main()
 {
    system("getmac");
    int *p = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
        p[i] = 0;
    for (int i = 0; i < 3; i++)
        printf("%d ", p[i]);
  free(p);
  return 0;
}
