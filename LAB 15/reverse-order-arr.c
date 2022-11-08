#include <stdio.h>

void main()
{
    int n;
    printf("how many number you want to enter: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
        // i++;
    }
    printf("revarce order \n");
    for (int i2 = i - 1; i2 >= 0; i2--)
    {
        printf("%d \n", arr[i2]);
    }
}