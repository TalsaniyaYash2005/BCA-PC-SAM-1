#include <stdio.h>

void main() {
    int row, col;

    printf("enter number of rows: ");
    scanf("%d", &row);
    printf("enter number of columns: ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col], matrix3[row][col];
    printf("enter first matrix\n\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("enter %d's row's %d's element: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\nenter second matrix\n\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("enter %d's row's %d's element: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix3[i][j] = 0;
            for (int k = 0; k < col; k++) {
                matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }
    


}