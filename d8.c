#include <stdio.h>
#include<stdlib.h>
int main()
 {
    system("getmac");
    int a = 5, b, c;
    b = ++a;   //
    printf("After pre-increment:\n");
    printf("a = %d, b = %d\n", a, b);
    a = 5;
    c = a++;
    printf("After post-increment:\n");
    printf("a = %d, c = %d\n", a, c);
    return 0;
}
