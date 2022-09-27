#include <stdio.h>

void main()
{
    int index = 0, max, sum = 0;
    printf("enter last number : ");
    scanf("%d", &max);

    // while (index < max) {
    //     index++;
    //     sum = sum + index;
    // }

    // OR

    // for loop
    
    // for (int i = 0; i <= max; i++) {
    //     if (i == 0) {

    //     } else if (i == 1) {
    //         printf("%d", i);
    //     } else {
    //         printf(" + %d", i);
    //     }

    //     sum = sum + i;
    // }

    // OR

    // do while loop
    do
    {
        index++;
        sum = sum + index;
    } while (index < max);

    printf(" = %d \n", sum);
}