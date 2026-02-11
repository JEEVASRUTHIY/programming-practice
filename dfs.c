#include <stdio.h>

#define MAX 10

int visited[MAX];

void DFS(int v, int n, int graph[MAX][MAX]) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            DFS(i, n, graph);
        }
    }
}

int main() {
    int n;
    int graph[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
        visited[i] = 0;
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    DFS(start, n, graph);

    return 0;
}
