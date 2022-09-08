#include <stdio.h>

int main()
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    int i = 0;
    int arr[100];
    int i2, r;
    
    while (number != 0) {
        r = number % 10;

        arr[i] = r;
        i++;

        number = number / 10;
    }

    for (i2 = i - 1; i2 > -1; i2--) {
        printf("%d \n", arr[i2]);
    }

    return 0;
}
