#include <stdio.h>

int main()
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    int i = 0;
    int arr[100];
    
    while (number != 0) {

        arr[i] = number % 10;
        i++;

        number = number / 10;
        
    }

    for (i = i - 1; i > -1; i--) {
        printf("%d \n", arr[i]);
    }
    

    return 0;
}
