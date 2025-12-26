#include <stdio.h>
#include <stdlib.h>
int main() {
    system("getmac");
    int r = 2, c = 3;
    int (*a)[c] = malloc(r * sizeof *a);
    a[0][0] = 1;
    a[0][1] = 2;
    a[1][2] = 6;
    printf("%d %d %d\n", a[0][0], a[0][1], a[1][2]);
    free(a);
    return 0;
}
