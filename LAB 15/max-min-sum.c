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
    }
    
    
}