#include <stdio.h>

void main() {
    int rows, cols;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    // reading elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter %d's row's %d's element: ", i + 1, j + 1);
            scanf("%d", matrix[i][j]);
        }
    }
    // printing elements in matrix form
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }   
}