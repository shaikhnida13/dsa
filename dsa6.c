#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
 {
     system("getmac");
    char text[100], pattern[50];
    int i, j, found = 0;
   printf("Enter the text: ");
   gets(text);
   printf("Enter the pattern: ");
   gets(pattern);
   int n = strlen(text);
   int m = strlen(pattern);
   for (i = 0; i <= n - m; i++)
 {
        for (j = 0; j < m; j++)
{
            if (text[i + j] != pattern[j])
                break;
        }
 if (j == m)
 {
            printf("Pattern found at position %d\n", i + 1);
            found = 1;
        }
    }
 if (!found)
        printf("Pattern not found\n");
 return 0;
}
