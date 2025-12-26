#include <stdio.h>
#include<stdlib.h>
int n;
int adj[10][10];
int visited[10] = {0};
void dfs(int v)
 {
    int i;
    printf("%d ", v);
    visited[v] = 1;
     for (i = 0; i < n; i++)
 {
        if (adj[v][i] == 1 && visited[i] == 0)
 {
            dfs(i);
        }
    }
}
int main()
 {
    system("getmac");
    int i, j, start;
   printf("Enter number of nodes: ");
   scanf("%d", &n);
   printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
 {
        for (j = 0; j < n; j++)
 {
            scanf("%d", &adj[i][j]);
        }
    }
 printf("Enter starting node: ");
 scanf("%d", &start);
 printf("DFS Traversal: ");
 dfs(start);
 return 0;
}
