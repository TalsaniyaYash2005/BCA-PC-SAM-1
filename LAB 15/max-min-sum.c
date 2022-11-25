#include <stdio.h>

void main()
{
    int n, min, max, sum = 0;
    printf("how many number you want to enter: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
    }
    printf("\nmin number is : %d", min);
    printf("\nmax number is : %d", max);
    printf("\nsum is : %d", sum);
}
