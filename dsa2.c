#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int x;
     system("getmac");
     printf("Address: %p\n", (void *)&x);
     printf("Address size: %lu bytes\n", (unsigned long)sizeof(void *));
   printf("Hex digits: %lu\n", (unsigned long)(sizeof(void *) * 2));
    return 0;
}
