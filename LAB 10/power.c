#include<stdio.h>

void main() {
    int no = 0, powerOfX, index = 0, power = 1;
    printf("enter number : ");
    scanf("%d", &no);

    printf("enter power value of %d : ", no);
    scanf("%d", &powerOfX);

    // while (index < powerOfX) {
    //     index++;
    //     power = power * no;
    // }

    // OR

    do {
        index++;
        power = power * no;
    } while (index < powerOfX);
    
    printf("%d \n", power);
}