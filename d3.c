#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int n, i, j, min, temp;
    int *arr;
    system("getmac");
    printf("Enter number of elements: ");
    scanf("%d", &n);
   arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL)
 {
        printf("Memory allocation failed\n");
        return 1;
    }
 printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
   temp = arr[i];
    arr[i] = arr[min];
     arr[min] = temp;
    }
   printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 free(arr);
 return 0;
}
