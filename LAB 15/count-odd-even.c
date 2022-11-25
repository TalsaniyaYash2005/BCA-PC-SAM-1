// #include<stdio.h>
// void main() {
//     int n, i = 1;
//     int arr1[100], arr2[100];
//     printf("enter n: ");
//     scanf("%d", &n);
//     int i1 = 0, i2 = 0;

//     while (i <= n) {
//         if (i % 2 == 0)
//         {
//             arr1[i1] = i;
//             i1++;
//         } else {
//             arr2[i2] = i;
//             i2++;
//         }
//         i++;
//     }

//     printf("even numbers: ");

//     for (i = 0; i < i1; i++) {
//         printf("%d ", arr1[i]);
//     }

//     printf("\n");

//     printf("odd numbers: ");

//     for (i = 0; i < i2; i++) {
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");
// }

#include <stdio.h>

void main() {
    int n, sum = 0, even = 0, odd = 0;
    printf("how many number you want to enter: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n\neven num: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
            printf("%d ", arr[i]);
        } else {
            odd++;
        }
        
    }

    printf("\nodd num: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nno of even number is : %d and no of odd number is : %d", even, odd);
}