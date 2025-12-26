#include <stdio.h>
#include<stdlib.h>
int adj[10][10], visited[10] = {0};
int queue[10], front = 0, rear = -1;
int n;
void bfs(int start)
 {
    int i, v;
    queue[++rear] = start;
    visited[start] = 1;
    while (front <= rear)
 {
        v = queue[front++];
        printf("%d ", v);
       for (i = 0; i < n; i++)
 {
            if (adj[v][i] == 1 && visited[i] == 0)
 {
                queue[++rear] = i;
                visited[i] = 1;
            }
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
     for (j = 0; j < n; j++)
     scanf("%d", &adj[i][j]);
     printf("Enter starting node: ");
    scanf("%d", &start);
    printf("BFS Traversal: ");
    bfs(start);
   return 0;
}
