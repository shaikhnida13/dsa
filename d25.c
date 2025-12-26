#include <stdio.h>
#include <stdlib.h>
struct Node {
    int vertex;
    struct Node *next;
};
struct Node *adj[10];
int visited[10];
int n;
struct Node* createNode(int v)
 {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->vertex = v;
    node->next = NULL;
    return node;
}
void addEdge(int src, int dest)
 {
    struct Node* node = createNode(dest);
    node->next = adj[src];
    adj[src] = node;
}
void DFS(int start)
 {
    int stack[10], top = -1;
    stack[++top] = start;

    printf("DFS: ");
    while (top != -1)
 {
        int v = stack[top--];
        if (!visited[v]) {
            printf("%d ", v);
            visited[v] = 1;
        }
        struct Node* temp = adj[v];
        while (temp)
 {
            if (!visited[temp->vertex])
                stack[++top] = temp->vertex;
            temp = temp->next;
        }
    }
    printf("\n");
}
void BFS(int start)
 {
    int queue[10], front = 0, rear = -1;
    for (int i = 0; i < n; i++) visited[i] = 0;

    queue[++rear] = start;
    visited[start] = 1;
    printf("BFS: ");
    while (front <= rear)
 {
        int v = queue[front++];
        printf("%d ", v);
       struct Node* temp = adj[v];
        while (temp)
 {
            if (!visited[temp->vertex])
 {
                visited[temp->vertex] = 1;
                queue[++rear] = temp->vertex;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

int main()
{
    system("getmac");
    int edges, src, dest, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    adj[i] = NULL;
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    printf("Enter edges (src dest):\n");
    for (int i = 0; i < edges; i++)
 {
        scanf("%d %d", &src, &dest);
        addEdge(src, dest);
        addEdge(dest, src);
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
   DFS(start);
    BFS(start);
    return 0;
}
