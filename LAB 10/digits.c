#include <stdio.h>

int main()
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    int i = 0;
    int arr[100];
    int i2, temp;
    
    while (number != 0) {
        temp = number % 10;

        arr[i] = temp;
        i++;

        number = number / 10;
    }

    for (i2 = i - 1; i2 > -1; i2--) {
        printf("%d \n", arr[i2]);
    }

    return 0;
}
