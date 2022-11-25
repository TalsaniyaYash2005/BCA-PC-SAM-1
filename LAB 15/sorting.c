#include<stdio.h>

void main() {
    int n;
    printf("how many number you want to enter: ");
    scanf("%d", &n);

    int arr[n], temp = 0;

    for (int i = 0; i < n; i++) {
        printf("enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("Elements of original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\n");
    printf("Elements of array sorted in ascending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
} 
