#include<stdio.h>
void main() {
    int n, i = 1;
    int arr1[100], arr2[100];
    printf("enter n: ");
    scanf("%d", &n);
    int i1 = 0, i2 = 0;

    while (i <= n) {
        if (i % 2 == 0)
        {
            // even
            arr1[i1] = i;
            i1++;
        } else {
            // odd
            arr2[i2] = i;
            i2++;
        }
        i++;
    }

    printf("even numbers: ");

    for (i = 0; i < i1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("odd numbers: ");

    for (i = 0; i < i2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}