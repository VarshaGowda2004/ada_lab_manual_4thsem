#include <stdio.h>  // Include standard input-output library
#include <limits.h> // Include limits library for INT_MAX

#define INF INT_MAX // Define INF as the maximum integer value

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to implement Floyd-Warshall algorithm
void floyd(int p[][10], int n) {
    int i, j, k;
    for (k = 0; k < n; k++) // Loop through each intermediate vertex
        for (i = 0; i < n; i++) // Loop through each source vertex
            for (j = 0; j < n; j++) // Loop through each destination vertex
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}

int main() {
    int a[10][10], n, i, j;
    printf("Enter the number of vertices (N): ");
    scanf("%d", &n); // Read the number of vertices

    printf("Enter the adjacency matrix (use %d for infinity):\n", INF);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); // Read the adjacency matrix


        }
    }

    floyd(a, n); // Call the Floyd-Warshall function

    printf("The shortest path matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

                printf("%d", a[i][j]); // Print the shortest path distance
        }
        printf("\n");
    }

    return 0; // Return 0 to indicate successful execution
}
