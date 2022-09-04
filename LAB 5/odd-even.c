#include<stdio.h>

void main()
{
    int a;
    printf("enter number: ");
    scanf("%d", &a);
    if (a%2 == 0) {
        printf("entered number is even");
    }  
    if (a%2 != 0) {
        printf("entered number is odd");

    }
    
}
