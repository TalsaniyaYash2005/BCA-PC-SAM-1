#include <stdio.h>

void main() {
    int rows, cols;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int matrix3[rows][cols];

    // reading elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter %d's row's %d's element: ", i + 1, j + 1);
            scanf("%d", matrix1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter %d's row's %d's element: ", i + 1, j + 1);
            scanf("%d", matrix2[i][j]);
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("addition is : \n\n");
    // printing elements in matrix form
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }   
}